/*
 * Auth: Caleb Jackson
 * Date: 03-04-26
 * Course: CSCI-2240 (Sec: 001)
 * Desc:  PROG-03, Number of Water Molecules.
 */

#include <stdio.h>

int main(void)
{
    double qts;
    double total_moles;
    const double mass_H2O = 3.0e-23;
    const int qt2grams = 950;

    printf("*** Water Molecules Counter ***\n");
    printf("Enter amount of water in quarts: ");
    scanf("%lf",& qts);

    total_moles = (qts * qt2grams) / mass_H2O;

    printf("Number of molecules: %.2E\n", total_moles);
    printf("\n");

    return 0;
}