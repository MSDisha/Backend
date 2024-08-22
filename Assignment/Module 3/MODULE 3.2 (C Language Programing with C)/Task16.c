#include <stdio.h>

main() {
    int i, j,Row = 5; //data members 

    for(i=1;i<=Row;i++) {	//row
        for(j=1;j<=i;j++) {		//column
            if(j % 2 == 1) {	//even values will be 1
                printf("1");
            } else {
                printf("0");	//odd values will be 0
            }
        }
        printf("\n"); 
    }

}

