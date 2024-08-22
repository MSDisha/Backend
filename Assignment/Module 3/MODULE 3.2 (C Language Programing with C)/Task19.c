#include <stdio.h>

main() {
    int i, j;	//data members
    int n = 5;
    for(i=1; i<=n;i++) {	//row
        for(j=1;j<=i;j++) {	//column 
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=n-1; i>=1; i--) {	//second row
        for(j=1;j<=i;j++) {	//second col
            printf("* ");
        }
        printf("\n");
    }
}

