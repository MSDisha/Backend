//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include <stdio.h>

int main() {
    int num, rev= 0;	//data member
    printf("Enter a number: ");
    scanf("%d", &num);	//input numbers

    while (num> 0) {	//condition if num is less than 0
        int digit = num % 10;	//num%10
        rev= rev * 10 + digit;	//rev*10+num%10
        num/= 10;	//num/10
    }
    printf("Reversed number: %d\n", rev);

}
   
