//Write a program you have to make a summation of first and last Digit. (E.g., 1234)
#include <stdio.h>

main() {
    int n, first, last, sum;	//data members 

    printf("Enter a number: ");
    scanf("%d", &n);	//input numbers
    last = n % 10;	//n%10

    while (n >= 10) {	//condition
        n /= 10;	
    }
    first = n;
    sum = first+last;

    printf("Sum of first and last digits: %d\n", sum);
}

