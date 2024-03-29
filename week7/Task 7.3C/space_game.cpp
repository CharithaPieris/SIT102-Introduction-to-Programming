#include "splashkit.h"
#include "planet_play.h"

space_game_data new_game()
{
    space_game_data result;

    result.player = new_player();
    add_random_coin(result);
    result.the_planet = new_planet();
    result.count = 0;

    return result;
}

void draw_game(const space_game_data& game)
{
    clear_screen(COLOR_BLACK);
    draw_player(game.player);
    draw_planet(game.the_planet);

    for (int i = 0; i < game.coins.size(); i++)
    {
        draw_coin(game.coins[i]);
    }
   
    draw_text("Score : " + std::__cxx11:: to_string(game.count), COLOR_WHITE, 30, 20);
    refresh_screen();
}

void remove_coin(vector<coin_data> &coins, int idx)
{
    free_animation(coins[idx].coin_animation);
    
    coins[idx] = coins[coins.size() -1];
    coins.pop_back();
}

void update_coins(vector<coin_data>& coins, const player_data& player, space_game_data& game)
{
    vector<int> to_remove;

    for (int i = 0; i < coins.size(); i++)
    {
        update_coin(coins[i]);
        if (player_hit_coin(player, coins[i]))
        {
            coins[i].x = rnd(screen_width());
            coins[i].y = rnd(screen_height());
            game.count = game.count + 1;

            to_remove.push_back(i);
        }
    }

    for(int i = to_remove.size() -1; i>=0; i--)
    {
        remove_coin( coins, to_remove[i]);
    }
}



void update_game(space_game_data& game)
{
    update_coins(game.coins, game.player, game);
    update_planet(game.the_planet);
    if (rnd() < 0.0001)
        add_random_coin(game);
}


void add_random_coin(space_game_data& game)
{
    game.coins.push_back(new_coin());
}
