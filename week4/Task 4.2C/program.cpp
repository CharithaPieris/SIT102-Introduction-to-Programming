#include "splashkit.h"

using namespace std;

 /**
  * Read in a line of text entered by the user. 
  * 
  * @param prompt   The message to display to prompt the user to supply data.
  * @return         The line of text entered by the user
  */
string read_string ( string prompt)
{
    string result;

    write(prompt); 
    result = read_line(); 

    return result;
}


/**
 * Reads an integer value from the user. This will loop 
 * to ensure that the user has entered a valid value before
 * returning
 * 
 * @param prompt    The message prompting for user input 
 * @returns         The integer the user entered in response 
 */
int read_integer (string prompt)
{
    string line;
    int result; 

    line = read_string(prompt);
    result = convert_to_integer(line);

    return result;

}


//Boolean between 
bool read_boolean(string prompt)
{
    string result;
    bool status;
    result = read_string(prompt);
    result = trim(to_lowercase(result));
    while (!status)
    {
        if (result == "yes" or result == "y")
        {
            status = true;
        }
        else if (result == "no" or result == "n")
        {
            status = false;
            return 0;
        }
        else 
        {
            write_line("Invalid input. Please enter 'yes' or 'no': ");
            result = read_string(prompt);
            result = trim(to_lowercase(result));  
        }   
    }  
    return status;
}

// Function to play the game
void playGame() {

    
    int targetNumber = rnd(100); 
    int guess;
    int attempts = 0;

    do 
    {
        guess = read_integer("Guess a number between 0 and 100: ");

        attempts++;

        if (guess < targetNumber)
        {
            write_line("Too Low!! Try Again. ") ;  
            write_line("");
        }
        else if (guess > targetNumber)
        {
            write_line("Too High!! Try Again. ");
            write_line("");

        }
        else 
        {
            write_line("Congratulations! You guessed the number ");
            write_line("");
        }

    }
    while (guess != targetNumber);
}

   
/**
 * The main sequence for the program. This will:
 * 
 *   - Ask the user for their name and age
 *   - Output custom messages based on the supplied age 
 * 
 * @return      0 to indicate success to the operating system
 */
int main()
{
    string name;
    bool again;

    do
    {
        name = read_string("Enter your name to get started : ");
        write_line("Welcome " + name + ", to our number guessing game!"); 
        write_line("");
        
        playGame();
        
        again = read_boolean("Want to play again (y/n)? ");
        write_line("");
    }
    while(again);
    

    return 0;
}