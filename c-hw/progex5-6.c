/* programming exercise 5-6, pg 83 */
/* convert total minutes to hours and minutes */

#include <stdio.h>
char line[100];         /* input line */
int tmin;               /* total minutes */
int hours;
int fmin;               /* final mintues (remainder) */

int main()
{
    printf("Enter total minutes: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &tmin);

    hours = tmin / 60;
    fmin = tmin % 60;

    printf("%d hours and %d minutes.\n", hours, fmin);
    return (0);
}
