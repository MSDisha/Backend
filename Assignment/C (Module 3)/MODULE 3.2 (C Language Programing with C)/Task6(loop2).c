//Looping programs:
//2. WAP to take 10 no. Input from user and find out … 
#include <stdio.h>

main() {
    int n,i;
    printf("Enter 10 numbers:\n"); //input num

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);	//input 10 numbers
        scanf("%d", &n);
    }
}

