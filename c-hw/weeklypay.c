/* exercise 6-6, pg 94 */
/* compute weekly pay, including overtime */

#include <stdio.h>

char line[100];     /* hours input */
char line2[100];    /* wage input */
float hours;        /* hours worked */
float wage;         /* hourly pay */
float ot;           /* hours of overtime */
float pay;          /* weekly pay */

main()
{
   printf("Enter hours worked: ");
   fgets(line, sizeof(line), stdin);
   sscanf(line, "%f", &hours);

   printf("Enter hourly wage: ");
   fgets(line2, sizeof(line2), stdin);
   sscanf(line2, "%f", &wage);

   ot = hours - 40;
   if (ot < 0) {
        ot = 0;
   }

   pay = (hours * wage) + (ot * (wage / 2));

   printf("Weekly pay is $%f\n", pay);

   return(0);
}
