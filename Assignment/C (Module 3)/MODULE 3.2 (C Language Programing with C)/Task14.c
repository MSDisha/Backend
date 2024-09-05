//Write a program make a summation of given number (E.g., 1523 Ans: -11)   
#include <stdio.h>

main() {
	int n, sum=0,temp; //data member
    printf("Enter a number: ");
    scanf("%d", &n); //input numbers
	
    while (n!=0) {	//condition if n is not equals to 0
        temp= n % 10;	//n%10
        sum+=temp;		//sum+n%10
        n /= 10;		//n/10
    }

    printf("Sum of digits:%d\n", sum);
}



