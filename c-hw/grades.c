/* exercise 6-3, pg 93 (using ex 6-2) */
/* print letter grade from numerical grade, adding + or - as appropriate */
/*this version is stuck on strcat */

#include <stdio.h>
#include <string.h>
char line[80];      /* input line */
int grade;          /* numeric grade */
char letter;     /* letter grade */
int plus;           /* the modulus of the number grade, to indicate +/- */
char app;          /* the + or - to be appended to the grade */

int main()
{


    printf("Enter grade:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &grade);

    if (grade >= 91) {
        letter = "A";
    }
    else if (grade >= 81) {
        letter = "B";
    }
    else if (grade >= 71) {
        letter = "C";
    }
    else if (grade >= 61) {
        letter = "D";
    }
    else
        letter = "F";

    plus = grade % 10;

    if (plus == 0) {
        letter = "F";
    }
    else if (plus <= 3) {
        app = "-";
    }
    else if (plus >= 8) {
        app = "+";
    }

    strcat(letter, app);

    printf("Your grade is %c\n", letter);

    return (0);
}
