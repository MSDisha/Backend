//swapping using third variable

#include<stdio.h>
main(){
	int a, b, temp;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	temp = a;
	a = b;
	b = temp;
	printf("After Swapping the value of A : %d",a);
	printf("\nAfter Swapping the value of B : %d",b);
}
