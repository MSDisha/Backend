//Looping programs: 
//Sum of Odd numbers  
#include <stdio.h>

main() {
    int n,i,count=0;		//data member
    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);	//input 10 numbers
        scanf("%d", &n);
         if(n % 2 != 0) {	//odd numbers
            count+=n;	//addition of odd numbers
        }
    }
    printf("Sum of Odd numbers:  %d\n", count);
    
}

