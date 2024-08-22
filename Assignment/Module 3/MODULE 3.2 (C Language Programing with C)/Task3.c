//WAP to find number is even or odd using ternary operator 
#include <stdio.h>

int main() {
    int n;
    char *res;

    printf("Enter an integer: ");
    scanf("%d", &n);

    res= (n% 2 == 0) ? "even" : "odd";

    printf("The number is %s\n", res);
}

