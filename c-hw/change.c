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
        printf("quarters %d change %d\n", quarter, change);
    }
    if (change >= 10) {
        dime = change / 10;
        change = change % 10;
        printf("dimes %d change %d\n", dime, change);
    }
    if (change >= 5) {
        nickel = change /10;
        change = change % 10;
        printf("nickels %d change %d\n", nickel, change);
    }
    printf("Quarters: %d, Dimes: %d, Nickels: %d, Pennies: %d", quarter, dime, nickel, change);
    return (0);
}
