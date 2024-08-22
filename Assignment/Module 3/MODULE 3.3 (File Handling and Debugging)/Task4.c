//WAP to find factorial using recursion 
#include<stdio.h>
multNum(int n) {	//function
    if (n>=1)	//condition
        return n*multNum(n-1);	
    else
        return 1;
}
main() {
    int n;
    printf("Enter a positive integer: ");	//input num 
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multNum(n));	//Factroial
}


