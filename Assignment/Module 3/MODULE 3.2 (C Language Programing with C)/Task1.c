//WAP to make simple calculator (operation include Addition, Subtraction,
//Multiplication, Division, modulo) 
#include<stdio.h>
main()
{
    int n1,n2,add,sub,mul,div,mod;
    printf("Enter Number 1\n");
    scanf("%d", &n1);
    printf("Enter Number 2\n");
    scanf("%d", &n2);
    add= n1 + n2 ;
    sub= n1 - n2;
    mul= n1 * n2;
    div= n1/n2;
    mod=n1%n2;
    printf("Addition = %d\n",add);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %d\n",div);
	printf("Modulo = %d\n",mod);
}
