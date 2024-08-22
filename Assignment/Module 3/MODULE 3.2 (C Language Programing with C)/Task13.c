//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)   
#include <stdio.h> 
 
int main() { 
    int num[5],i,max; 
 
    printf("Enter 5 numbers:\n"); 
 
    for (i = 0; i<5; i++) { 
        scanf("%d", &num[i]); 
    } 
    for (i = 1; i < 5; i++) { 
        if (num[i] > max) { 
            max = num[i]; 
        } 
    } 
 
    printf("Maximum number is: %d\n", max); 
} 
