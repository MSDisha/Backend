#include<stdio.h>
main(){
	int a,b;
	
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	printf("A: %d",a);
	printf("\nB: %d",b);
	
	printf("\nAddition: %d",a+b);
	printf("\nSubtraction: %d",a-b);
	printf("\nMultiplication: %d",a*b);
	printf("\nDivision: %.2f",(float)a/b); //typecasting
}
