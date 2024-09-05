#include <stdio.h>

int main() {
    int i, j, n = 5;	//data members

    for (i = 1; i <= n; i++) {	//row
        for (j = 1; j <= n - i; j++)//spaces
		 {
            printf(" ");	
        }

        for (j = 1; j <= i; j++) //stars	//column
		{
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

