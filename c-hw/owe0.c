/* example 6-4, pg.92 */
/* yes, I know it's wrong.  that's what it's an example of */

#include <stdio.h>
char line[80];      /* input line */
int balance_owed;   /* amount owed */

int main()
{
    printf("Enter number of dollars owed:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &balance_owed);

    if (balance_owed == 0)
        printf("You owe nothing.");
    else
        printf("You owe %d dollars.\n", balance_owed);

    return (0);
}
