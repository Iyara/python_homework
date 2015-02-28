/* programming exercise 5-4, pg 83 */
/* convert km to mph */

#include <stdio.h>
char line[100];     /* input line */
float kmh;           /* kilometers per hour */
float mph;

int main()
{
    printf("Enter km per hour: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &kmh);

    mph = kmh * 0.6213712;

    printf("Miles per hour: %f\n", mph);
    return (0);
}
