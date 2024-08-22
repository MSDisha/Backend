// WAP of Addition, Subtraction, Multiplication and Division using Switch 
// case.(Must Be Menu Driven)  
#include<stdio.h>
main()
{
    int a,b;
    int n;
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);
    printf("Enter your num: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1	:
        printf("Addition of %d and %d is : %d",a,b,a+b);
        break;
    case 2	:
        printf("Sub of %d and %d is : %d",a,b,a-b);
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);
        break;
    default	:
        printf(" Enter Valid No.");
        break;
    }
}

