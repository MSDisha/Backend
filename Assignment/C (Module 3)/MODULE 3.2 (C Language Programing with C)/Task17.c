#include <stdio.h>

int main() {
    char c = 'A'; //data member 
	int i,j;
    for (i = 1; i <= 5; i++) {	//row
        for (j = 1; j <= i; j++) { 	//column
            printf("%c", c);	
            c++;	//increment
        }
        printf("\n"); 
    }
}

