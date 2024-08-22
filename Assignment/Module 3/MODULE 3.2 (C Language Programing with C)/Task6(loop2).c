//Looping programs:
//2. WAP to take 10 no. Input from user and find out … 
#include <stdio.h>

main() {
    int n,i;
    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
    }
}

