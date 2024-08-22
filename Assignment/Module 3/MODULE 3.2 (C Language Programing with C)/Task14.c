//Write a program make a summation of given number (E.g., 1523 Ans: -11)   
#include <stdio.h>

main() {
	int n, sum=0,temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!=0) {
        temp= n % 10;
        sum+=temp;
        n /= 10;
    }

    printf("Sum of digits:%d\n", sum);
}



