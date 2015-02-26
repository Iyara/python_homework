/* exercise 5-1, pg 83 */

#include <stdio.h>
char line[100];     /* input line */
int centi;          /* centigrade input */
int fahren;         /* fahrenheit output */

int main()
{
    printf("Enter temp in centigrade: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &centi);

    fahren = (centi * (9/5)) + 32;
    printf("The temp in Fahrenheit is %d\n", fahren);
    return (0);
}
