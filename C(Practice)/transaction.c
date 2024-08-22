#include<stdio.h>
int main(){
	float a,b,c,d,e,sum;
	printf("Enter the credited value a: ");
	scanf("%f",&a);
	printf("Enter the credited value b: ");
	scanf("%f",&b);
	printf("Enter the debited value c: ");
	scanf("%f",&c);
	printf("Enter the credited value d: ");
	scanf("%f",&d);
	printf("Enter the debited value e: ");
	scanf("%f",&e);
	sum=a+b-c+d-e;
	printf("%f",sum);
	
}
