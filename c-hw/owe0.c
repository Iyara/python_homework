/* was: example 6-4, pg.92 */
/* now: exercise 6-2, pg 93 */
/* adapt code from example 6-4 to determine the letter grade, given a numerical grade */

#include <stdio.h>
char line[80];      /* input line */
int grade;          /* numeric grade */
char letter;     /* letter grade */

int main()
{
    printf("Enter grade:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &grade);

    if (grade >= 91) {
        letter = 'A';
    }
    else if (grade >= 81) {
        letter = 'B';
    }
    else if (grade >= 71) {
        letter = 'C';
    }
    else if (grade >= 61) {
        letter = 'D';
    }
    else
        letter = 'F';

     printf("Your grade is %c\n", letter);

    return (0);
}
