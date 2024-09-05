//Looping programs:  
// How many Even numbers are there 
#include <stdio.h>

main() {
    int n,i,count=0; // data members
    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1); //input 10 members 
        scanf("%d", &n);
         if(n % 2 == 0) {	//Even number if the remainder is 0
            count++;
        }
    }
    printf("Total even numbers:  %d\n", count);
    
}

