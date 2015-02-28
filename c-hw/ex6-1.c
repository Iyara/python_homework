/* example 6-1, pg 89 */
/* print fibonacci sequence */

#include <stdio.h>
int old_number;     /* previous fib. number */
int current_number; /* current fib. number */
int next_number;    /* next number in the series */

int main()
{
    /* start things out */
    old_number = 1;
    current_number = 1;

    printf("1\n");      /* print first number */

    while (current_number < 100) {

        printf("%d\n", current_number);
        next_number = current_number + old_number;

        old_number = current_number;
        current_number = next_number;
    }
    return (0);
}
