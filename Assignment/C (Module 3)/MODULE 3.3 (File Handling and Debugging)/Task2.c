// WAP of Addition, Subtraction, Multiplication and Division using Switch 
// case.(Must Be Menu Driven)  
#include<stdio.h>
main()
{
    int a,b;	//data members
    int n;
    printf("Enter the values of a & b: ");
    scanf("%d %d",&a,&b);	//input value a and b
    printf("Enter your num: ");
    scanf("%d",&n);	//input choice of num 
    switch(n)
    {
    case 1	:
        printf("Addition of %d and %d is : %d",a,b,a+b);	//addition
        break;
    case 2	:
        printf("Sub of %d and %d is : %d",a,b,a-b);		//Subtraction
        break;
    case 3	:
        printf("Multiplication of %d and %d is : %d",a,b,a*b);	//Multiplication 
        break;
    case 4	:
        printf("Division of Two Numbers is %d : ",a/b);		// Division
        break;
    default	:
        printf(" Enter Valid No.");	
        break;
    }
}

