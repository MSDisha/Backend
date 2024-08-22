//WAP to find simple interest
#include <stdio.h>

main() {
    float p, r, t, simInt;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("\nEnter the rate of interest: ");
    scanf("%f", &r);
    printf("\nEnter the time period: ");
    scanf("%f", &t);
    simInt = (p*r*t) / 100;

    printf("\nSimple Interest: %.2f\n", simInt);

}

