//Write a program to find out the max number from given array using function  
#include <stdio.h> 
 
int main() { 
    int num[5],i,max; //data members
 
    printf("Enter 5 numbers:\n"); //inpuit 5 numberts
 
    for (i = 0; i<5; i++) { 
        scanf("%d", &num[i]); 	
    } 
    for (i = 1; i < 5; i++) { 
        if (num[i] > max) { 	//condition if numbers if maximum
            max = num[i]; 
        } 
    } 
 
    printf("Maximum number is: %d\n", max); 
} 

