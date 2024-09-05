//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array  
#include <stdio.h>//(DOUBT QUESn)

main() 
{
    int n1,n2;

    printf("Enter the number of n1 and n2: ");
    scanf("%d %d", &n1, &n2);

    int a[i][j],b[i][j], res[i][j];
    printf("Enter elements of A: \n");
    for (int i=0; i<n1; i++) {
        for (int j=0; j<n2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of B: \n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
   
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            res[i][j] = a[i][j] + b[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            res[i][j] = a[i][j] - b[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i <n1; i++) {
        for (int j = 0; j <n2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

