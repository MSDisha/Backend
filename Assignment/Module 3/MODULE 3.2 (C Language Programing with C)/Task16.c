#include <stdio.h>

main() {
    int i, j,Row = 5; 

    for(i=1;i<=Row;i++) {
        for(j=1;j<=i;j++) {
            if(j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); 
    }

}

