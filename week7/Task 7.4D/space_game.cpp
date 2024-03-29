#include "splashkit.h"
#include "planet_play.h"

space_game_data new_game()
{
    space_game_data result;

    result.player = new_player();
    result.the_coin = new_coin();
    result.the_planet = new_planet();
    result.count = 0;

    return result;
}

void draw_game(const space_game_data& game)
{
    clear_screen(COLOR_BLACK);
    draw_player(game.player);
    draw_planet(game.the_planet);
    draw_coin(game.the_coin);
    draw_text("Score : " + std::__cxx11:: to_string(game.count), COLOR_WHITE, 30, 20);
    refresh_screen();
}

void update_game(space_game_data & game)
{
    update_coin(game.the_coin);
    update_planet(game.the_planet);
    if (player_hit_coin(game.player, game.the_coin))
    {
        game.the_coin.x = rnd(screen_width());
        game.the_coin.y = rnd(screen_height());
        game.count = game.count + 1;
    }
}
