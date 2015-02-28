/* programming exercise 6-1, pg 93 */
/* find the square of the distance between two points */

#include <stdio.h>
char lineA[100];        /* input coordinates for point A */
char lineB[100];        /* input coordinates for point B */
float xA;               /* x coord of point A */
float yA;               /* y coord of point A */
float xB;               /* x coord of point B */
float yB;               /* y coord of point B */
float csq;              /* square of distance c */

int main()
{
    printf("Enter x and y coordinates for point A: ");
    fgets(lineA, sizeof(lineA), stdin);
    sscanf(lineA, "%f %f", &xA, &yA);

    printf("Enter coordinates for point B: ");
    fgets(lineB, sizeof(lineB), stdin);
    sscanf(lineB, "%f %f", &xB, &yB);

    csq = ((xA - xB) * (xA - xB)) + ((yA - yB) * (yA - yB));

    printf("The square of the distance between A and B is %f\n", csq);
    return (0);
}
