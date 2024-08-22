#include <stdio.h>

main() {
    int i, j;	//data members 
    int rows = 5; //given value 5

    for (i = 1; i <= rows; i++) {	//row
        for (j = 1; j <= i; j++) {	//col
            printf("%c ", 'A' + j - 1);	
        }
        printf("\n");
    }
}

