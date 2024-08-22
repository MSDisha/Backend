//WAP to find number is even or odd using ternary operator 
#include <stdio.h>

int main() {
    int n;
    char *res;	//data members

    printf("Enter an integer: ");
    scanf("%d", &n);	//input numbers 

    res= (n% 2 == 0) ? "even" : "odd";	//odd and even by ternary operator

    printf("The number is %s\n", res);	
}

