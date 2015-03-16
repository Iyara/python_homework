/* exercise 6-5, pg 94 */
/* tell if a year is a leap year */
/* left the debug in */

#include <stdio.h>

char line[100];     /* input data */
int year;           /* year to be examined */
int leap;           /* is year a leap year? y/n */
int remain;         /* holds modulo of 'divisible by' checks */

int main()
{
    leap = 0;
    printf("Enter year: ");

    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &year);

    remain = year % 4;
    if (remain == 0) {
        leap = 1;
    }
    printf("%d %d\n", remain, leap);

    remain = year % 100;
    if (remain == 0) {
        leap = 1;
    }
    printf("%d %d\n", remain, leap);

    remain = year % 400;
    if (remain == 0) {
        leap = 0;
    }
    printf("%d %d\n", remain, leap);

    if (leap == 1) {
        printf("%d is a leap year.\n", year);
    }
    else
        printf("%d is not a leap year.\n", year);

    return (0);
}

