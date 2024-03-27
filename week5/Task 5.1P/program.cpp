#include "splashkit.h"

//ship enumeration
enum ship_kind
{
    AQUARII,
    GLIESE,
    PEGASI,
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

void load_resources()
{
    load_resource_bundle("game_bundle", "planet_play.txt");
}

//ship bitmap function
bitmap ship_bitmap(ship_kind kind)
{
    switch (kind)
    {
        case AQUARII:
            return bitmap_named("aquarii");
        case GLIESE:
            return bitmap_named("gliese");
        case PEGASI:
            return bitmap_named("pegasi");
    }
}

//planet bitmap function
bitmap planet_bitmap(planet_kind kind)
{
    switch (kind)
    {
        case EARTH:
            return bitmap_named("earth");
        case JUPITER:
            return bitmap_named("jupiter");
        case MARS:
            return bitmap_named("mars");
        case MERCURY:
            return bitmap_named("mercury");
    }
}


 // Drawing ship
void draw_player(ship_kind kind, double x, double y)
{
    bitmap to_draw;
    to_draw = ship_bitmap(kind);
    draw_bitmap(to_draw, x, y);
} 

// Drawing planet
void draw_planet(planet_kind kind, double x, double y)
{
    bitmap to_draw;
    to_draw = planet_bitmap(kind);
    draw_bitmap(to_draw, x, y);
}

int main()
{
    open_window("Planet Play", 800, 500);
    load_resources();


    ship_kind player_ship;
    planet_kind player_planet;
    player_ship = AQUARII;
    player_planet = EARTH;
    
    while ( not quit_requested() )
    {
        process_events();

        if (key_typed(NUM_1_KEY)) player_ship = AQUARII;
        if (key_typed(NUM_2_KEY)) player_ship = GLIESE;
        if (key_typed(NUM_3_KEY)) player_ship = PEGASI;
        if (key_typed(NUM_4_KEY)) player_planet = EARTH;
        if (key_typed(NUM_5_KEY)) player_planet = JUPITER;
        if (key_typed(NUM_6_KEY)) player_planet = MARS;
        if (key_typed(NUM_7_KEY)) player_planet = MERCURY;
                                                        
        clear_screen(COLOR_BLACK);
        draw_player(player_ship, 10, 200);
        draw_planet(player_planet, 300, 200);
        refresh_screen();
    } 

    

    return 0;
}