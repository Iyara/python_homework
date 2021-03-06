/* guess--a simple guessing game */

/* a random number between 1 and 100 is chosen.
 the player is given a set of bounds and must choose a number between them.
 If the player chooses the correct number, he wins.
 Otherwise, the bounds are adjusted to reflect the player's guess and the game continues
 
 the random number is generated by the statement rand() % 100
 because rand() returns a number 0 <= rand() <= maxint
    this slightly favors lower numbers
*/

#include <stdio.h>
#include <stdlib.h>

int     number_to_guess;    /* random number to be guessed */
int     low_limit;          /* current lower limit of player's range */
int     high_limit;         /* current upper limit of player's range */
int     guess_count;        /* number of times the player has guessed */
int     player_number;      /* number gotten from the player */
char    line[80];           /* input buffer for a single line */

int main()
{
    while (1) {
    number_to_guess = rand() % 100 + 1;
    
    /* initialize variables for loop */
    low_limit = 0;
    high_limit = 100;
    guess_count = 0;
    
        while (1) {
            /* tell user what the bounds are and get his guess */
            printf("Bounds %d - %d\n", low_limit, high_limit);
            printf("Value[%d]? ", guess_count);
            
            ++guess_count;
            
            fgets(line, sizeof(line), stdin);
            sscanf(line, "%d", &player_number);
            
            /* did he guess right? */
            if (player_number == number_to_guess)
                break;
                
            /* adjust bounds for next guess */
            if (player_number < number_to_guess)
                low_limit = player_number;
            else
                high_limit = player_number;
        
        }
    printf("Bingo!\n");
    
    }
    
}