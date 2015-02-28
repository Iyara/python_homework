/* programming exercise 5-5, pg 83 */
/* convert hours and minutes to total number of minutes */

#include <stdio.h>
char line[100];     /* input line */
int hr;             /* input hours */
int minute;         /* input minutes */
int tmin;           /* total minutes */

int main()
{
    printf("Enter hours and minutes: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &hr, &minute);

    tmin = (hr * 60) + minute;
    printf("Total minutes: %d\n", tmin);
    return (0);
}
