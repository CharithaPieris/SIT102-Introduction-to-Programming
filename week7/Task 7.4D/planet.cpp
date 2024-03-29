#include "splashkit.h"
#include "planet_play.h"

bitmap planet_bitmap(planet_kind kind)
{
    switch (kind)
    {
        case JUPITER:
            return bitmap_named("jupiter");
        case MARS:
            return bitmap_named("mars");
        case MERCURY:
            return bitmap_named("mercury");
        case NEPTUNE:
            return bitmap_named("neptune");
        case PLUTO:
            return bitmap_named("pluto");
        case SATURN:
            return bitmap_named("saturn");
        case URANUS:
            return bitmap_named("uranus");
        case VENUS:
            return bitmap_named("venus");
        default:
            return bitmap_named("earth");
    }
}

void draw_planet(const planet_data& planet_to_draw)
{
    bitmap to_draw;
    to_draw = planet_bitmap(planet_to_draw.kind);
    draw_bitmap(to_draw, planet_to_draw.x, planet_to_draw.y);
}

planet_kind random_planet_kind()
{
    return static_cast<planet_kind>(rnd(8));
}

planet_data new_planet()
{
    planet_data result;
    result.kind = random_planet_kind();
    result.x = rnd(screen_width() - bitmap_width(planet_bitmap(result.kind)));
    result.y = rnd(screen_height() - bitmap_height(planet_bitmap(result.kind)));
    return result;
}

void update_planet(planet_data & planet)
{
    planet.x -=planet.movement_speed;

    if(planet.x + bitmap_width(planet_bitmap(planet.kind)) < 0)
    {
        planet = new_planet();
        planet.x = screen_width() + rnd(500);
    }
}