//WAP to find factorial using recursion 
#include<stdio.h>
multNum(int n) {
    if (n>=1)
        return n*multNum(n-1);
    else
        return 1;
}
main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multNum(n));
}


