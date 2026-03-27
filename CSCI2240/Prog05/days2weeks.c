/*
 * Auth: Your Name
 * Date: MM-DD-YY (Due: MM-DD-YY)
 * Course: CSCI-2240 (Sec: YYY)
 * Desc: PROG-05, Days to Weeks Program.
 */

#include <stdio.h>

int main(void)
{
    int days;
    int days_rem; 
    int weeks;
    const int days_per_week = 7;

    printf("*** Days to Weeks Program ***\n");

    printf("Enter the number of days (or 0 to quit): ");
    scanf("%d", &days);

    while (days > 0)
    {
        weeks = days / days_per_week;
        days_rem = days % days_per_week;

        printf("%d days amounts to: %d weeks, %d days.\n",
               days, weeks, days_rem);

        printf("\nEnter the number of days (or 0 to quit): ");
        scanf("%d", &days);
    }

    printf("Thank you for playing!\n");

    return 0;
}