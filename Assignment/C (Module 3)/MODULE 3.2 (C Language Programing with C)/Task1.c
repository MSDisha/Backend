//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) 
#include<stdio.h>
main()
{
    int n1,n2,add,sub,mul,div,mod; //data members 
    printf("Enter Number 1\n");
    scanf("%d", &n1);	//input first number 
    printf("Enter Number 2\n");
    scanf("%d", &n2);	//input second number 
    add= n1 + n2 ;	//addition
    sub= n1 - n2;	//subtraction
    mul= n1 * n2;	//multiplication
    div= n1/n2;	 	//division
    mod=n1%n2;		//modulo
    printf("Addition = %d\n",add);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %d\n",div);
	printf("Modulo = %d\n",mod);
}
