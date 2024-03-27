#include "splashkit.h"
#include "planet_play.h"

void load_resources()
{
    load_resource_bundle("game_bundle", "planet_play.txt");
}

int main()
{
    open_window("Planet Play", 800, 500);
    load_resources();

    space_game_data game;
    game = new_game();

    game.the_planet = new_planet();
    game.the_planet.x =screen_width() + rnd(500);

    while (!quit_requested())
    {
        process_events();
        handle_input(game.player);
        update_game(game);

        //clear_screen(COLOR_BLACK);
        draw_game(game);
        //refresh_screen();
    }

    return 0;
}
