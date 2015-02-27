/* prog. exercise 5-2, pg 83 */

#include <stdio.h>
char line[100];         /* input line */
float radius;
float vol;               /* volume of sphere */
const float PI = 3.1415927;  /* constant value of PI */


int main()
{
    printf("Enter radius of sphere: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &radius);

    vol = (4.0/3.0) * PI * (radius * radius * radius);
    printf("The volume is: %f\n", vol);
    return (0);
}

