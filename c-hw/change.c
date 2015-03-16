/* exercise 6-4, pg 94 */
/* given less than $1, compute coins needed */

#include <stdio.h>
char line[100];     /* line of input */
int amt;            /* amount of money entered */
int change;         /* amount of change still to be converted */
int quarter;        /* number of quarters */
int dime;           /* number of dimes */
int nickel;         /* number of nickels */

int main()
{
    printf("Enter number of cents (less than 100) ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &amt);

    if (amt >= 25) {
        quarter = amt / 25;
        change = amt % 25;
    }
    else if (amt < 25) {
        change = amt;
    }

    if (change >= 10) {
        dime = change / 10;
        change = change % 10;
    }
    else if (amt < 10) {
        change = amt;
    }

    if (change >= 5) {
        nickel = change / 5;
        change = change % 5;
    }
    else if (amt < 5) {
        change = amt;
    }

    printf("Quarters: %d, Dimes: %d, Nickels: %d, Pennies: %d", quarter, dime, nickel, change);
    return (0);
}
