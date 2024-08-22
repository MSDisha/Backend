//Looping programs: 
//Sum of Odd numbers  
#include <stdio.h>

main() {
    int n,i,count=0;
    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &n);
         if(n % 2 != 0) {
            count+=n;
        }
    }
    printf("Sum of Odd numbers:  %d\n", count);
    
}

