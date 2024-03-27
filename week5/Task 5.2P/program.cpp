#include "splashkit.h"
#define PLAYER_SPEED 0.03

enum ship_kind
{
    AQUARII,
    GLIESE,
    PEGASI
};

struct player_data
{
    ship_kind kind;
    double x;
    double y;
};

enum planet_kind
{
    EARTH,
    JUPITER,
    MARS,
    MERCURY,
    NEPTUNE,
    PLUTO,
    SATURN,
    URANUS,
    VENUS,
  
};

struct planet_data
{
    planet_kind kind;
    double x;
    double y;
};

void load_resources()
{
    load_resource_bundle("game_bundle", "planet_play.txt");
}

bitmap ship_bitmap(ship_kind kind)
{
    switch(kind)
    {
        case AQUARII:
            return bitmap_named("aquarii");
        case GLIESE:
            return bitmap_named("gliese");
        default:
            return bitmap_named("pegasi");
    }
}

bitmap planet_bitmap(planet_kind kind)
{
    switch(kind)
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

// Draw player
void draw_player(const player_data & player_to_draw)
{
    bitmap to_draw;
    to_draw = ship_bitmap(player_to_draw.kind);
    draw_bitmap(to_draw, player_to_draw.x, player_to_draw.y);
}

//player void hanlde
void handle_input(player_data & player)
{

    if (key_typed(NUM_1_KEY)) player.kind = AQUARII;
    if (key_typed(NUM_2_KEY)) player.kind = GLIESE;
    if (key_typed(NUM_3_KEY)) player.kind = PEGASI;

    if (key_down(RIGHT_KEY)) player.x += PLAYER_SPEED;
    if (key_down(LEFT_KEY)) player.x -= PLAYER_SPEED;
    if (key_down(UP_KEY)) player.y -= PLAYER_SPEED;
    if (key_down(DOWN_KEY)) player.y += PLAYER_SPEED;
}

player_data new_player()
{
    player_data result;

    result.kind = PEGASI;
    result.x = 50;
    result.y = 200;

    return result;
}

// Draw planet
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
void draw_planet(const planet_data  & planet)
{
    bitmap to_draw;
    to_draw = planet_bitmap(planet.kind);
    draw_bitmap(to_draw, planet.x, planet.y);
}


int main()
{
    open_window("Planet Play", 800, 500);
    load_resources();

    player_data player = new_player();
    planet_data planet1 = new_planet();
    planet_data planet2 = new_planet();


    while ( not quit_requested() )
    {
        process_events();

        handle_input(player);


        clear_screen(COLOR_BLACK);
        draw_player(player);
        draw_planet(planet1);
        draw_planet(planet2);
        refresh_screen();
    }
     

    return 0;
}