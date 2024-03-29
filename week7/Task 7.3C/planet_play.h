#include "splashkit.h"
#include <vector>

using namespace std;
#define PLAYER_SPEED 0.1

enum ship_kind
{
    AQUARII,
    GLIESE,
    PEGASI,
};

struct player_data
{
    ship_kind kind;
    double x;
    double y;
};

struct coin_data
{
    animation coin_animation;
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
    bool off_screen;
    const double movement_speed = 0.1;

    planet_data& operator = (const planet_data& other)
    {
        if (this != &other)
        {
            kind = other.kind;
            x = other.x;
            y = other.y;
        }
        return *this;
    }
};

struct space_game_data
{
    player_data player;
    vector<coin_data>coins;
    planet_data the_planet;
    int count;
};

player_data new_player();
void draw_player(const player_data& player_to_draw);
bool player_hit_coin(const player_data& player, const coin_data& coin);

void handle_input(player_data& player);

coin_data new_coin(double x, double y);
coin_data new_coin();
void draw_coin(const coin_data& coin);
void update_coin(coin_data& coin);
void update_coins(vector<coin_data>& coins, const player_data& player, space_game_data& game);

space_game_data new_game();
void draw_game(const space_game_data& game);
void update_game(space_game_data& game);
void add_random_coin(space_game_data &game);

bitmap ship_bitmap(ship_kind kind);
bitmap planet_bitmap(planet_kind kind);
void draw_planet(const planet_data& planet_to_draw);
void update_planet(planet_data & planet);

planet_data new_planet();
void draw_planet(const planet_data& planet_to_draw);
void update_game(space_game_data& game);