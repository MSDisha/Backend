#include <stdio.h>

int main() {
	int i,j,n=1;	//data members
    for (i = 1; i <= 5; i++) {	//row
	      for (j = 1; j<=i; j++) { 	//col
            printf("%d ", n);
            n++; //invrement
        }
        printf("\n"); 
    }
}

