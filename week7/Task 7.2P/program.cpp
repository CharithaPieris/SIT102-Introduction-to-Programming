#include <splashkit.h>
#include <vector>
using namespace std;

// Enumeration to represent menu options
enum menu_option
{
    PRINT_TEAM,
    CHANGE_TEAM_NAME,
    CHANGE_CAPTAIN,
    ADD_PLAYER,
    REMOVE_PLAYER,
    QUIT
};

//struct to represent player
struct Player
{
    string name;
    int number;
    int highest_score;
};

//struct to represent the team
struct Team
{
    string name;
    Player captain;
    vector<Player> players;
};

string read_string(string prompt)
{
    write(prompt);
    return read_line();
}

int read_integer(string prompt)
{
    write(prompt);
    return convert_to_integer(read_line());
}

//reading player data
Player read_player()
{
    Player player;
    player.name = read_string("Enter player's name: ");
    player.number = read_integer("Enter player's number: ");
    player.highest_score = read_integer("Enter player's highest score: ");
    return player;
}

//printing player data
void print_player(const Player &player)
{
    write_line();
    write_line("Player Name: " + player.name);
    write_line("Player Number: " + to_string(player.number));
    write_line("Player highest score: " + to_string(player.highest_score));
    write_line();
}

//read team name and the captain
Team read_team()
{
    Team team;
    team.name = read_string("Enter team name: ");
    write_line("Enter captain details:");
    team.captain = read_player();

//how many players in the team
    int player_count = read_integer("Enter the number of players in the team: ");

//loop for the player count
    for (int i = 0; i < player_count; ++i)
    {
        write_line("Enter player details for player " + to_string(i + 1) + ":");
        Player player = read_player();
        team.players.push_back(player);
    }

    return team;
}

//display all information
void print_team(const Team& team)
{
    write_line();
    write_line("Team Name: " + team.name);
    write_line();
    write_line("Captain Details:");
    print_player(team.captain);
    write_line();
    write_line("Player Details:");

   for (int i = 0; i < team.players.size(); ++i)
    {
        write_line("Player " + to_string(i + 1) + ":");
        print_player(team.players[i]);
        write_line("--------------------");
    }
}

//Changing name
void change_team_name(Team& team)
{
    string new_name = read_string("Enter the new team name: ");
    team.name = new_name;
    write_line("Team name changed to " + new_name);
}

//Changing captain
void change_captain(Team& team)
{
    Player new_captain = read_player();
    team.captain = new_captain;
    write_line("Captain details updated.");
}

//Adding new player
void add_player(Team& team)
{
    Player new_player = read_player();
    team.players.push_back(new_player);
    write_line("New player added to the team.");
}

//Remove a player without removing the captain
void remove_player(Team& team)
{
    write_line("Select a player to remove:");
    for (int i = 0; i < team.players.size(); ++i)
    {
        write_line(to_string(i + 1) + ". " + team.players[i].name);
    }

    int player_index = read_integer("Enter the index of the player to remove (0 to cancel): ");

    if (player_index > 0 && player_index <= team.players.size())
    {
        team.players.erase(team.players.begin() + player_index - 1);
        write_line("Player removed from the team.");
    }
    else if (player_index != 0)
    {
        write_line("Invalid player index. No player removed.");
    }
}


menu_option read_menu_option()
{
    write_line();
    write_line("Menu:");
    write_line("1. Print Team");
    write_line("2. Change Team Name");
    write_line("3. Change Captain");
    write_line("4. Add Player");
    write_line("5. Remove Player");
    write_line("6. Quit");
    write_line();
    int option = read_integer("Enter menu option: ");
    return static_cast<menu_option>(option - 1);
}

int main()
{
    Team team = read_team();

    bool exit_program = false;
    menu_option option;

    while (!exit_program)
    {
        option = read_menu_option();

        switch (option)
        {
        case PRINT_TEAM:
            print_team(team);
            break;
        case CHANGE_TEAM_NAME:
            change_team_name(team);
            break;
        case CHANGE_CAPTAIN:
            change_captain(team);
            break;
        case ADD_PLAYER:
            add_player(team);
            break;
        case REMOVE_PLAYER:
            remove_player(team);
            break;
        case QUIT:
            exit_program = true;
            break;
        default:
            write_line("Invalid option. Please try again.");
            break;
        }
    }

    return 0;
}