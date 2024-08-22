#include <stdio.h>

int main() {
    int i, j, n = 5;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n - i; j++)//spaces
		 {
            printf(" ");
        }

        for (j = 1; j <= i; j++) //stars
		{
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}

