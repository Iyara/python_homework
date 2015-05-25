/* exercise 7-2, pg 111 */
/* write a program to calculate how many days are between a given pair of dates, such as 6/6/90 and 4/3/92 */

#include <stdio.h>

char    line1[100];     /* text from input (first date) */
char    line2[100];     /* text from input (second date) */
int     year1;
int     month1;
int     day1;
int     year2;
int     month2;
int     day2;
int     result1;        /* number of days from default date */
int     result2;        /* days from default date for second date */
int     answer;         /* subtract the two results */

int     main()
{
    printf("Enter date as: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%d%d%d", &month1, &day1, &year1);

    printf("%d %d %d\n", month1, day1, year1);
    
    return (0);
}