/* programming exercise 5-3, pg 83 */
/* write a program that prints the perimeter of a rectangle */

#include <stdio.h>
char line[100];         /* line of input data */
int height;
int width;
int perim;              /* calculated perimeter of rectangle */

int main()
{
    printf("Enter height and width: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &height, & width);

    perim = 2 * (width + height);

    printf("The perimeter is: %d\n", perim);
    return (0);
}

