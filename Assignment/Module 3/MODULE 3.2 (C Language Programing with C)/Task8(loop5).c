//Looping programs: 
//Sum of even numbers  
#include <stdio.h>

main() {
    int n,i,count=0;	//data member
    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);	//input 10 numbers
        scanf("%d", &n);
         if(n % 2 == 0) {	//even numbers
            count+=n;	//addition of even numbers
        }
    }
    printf("Total even numbers:  %d\n", count);
    
}

