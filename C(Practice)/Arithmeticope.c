#include<stdio.h>
int main(){
	float a,b,ans;
	printf("Enter the number a and b: ");
	scanf("%f %f",&a,&b);
	ans=a+b;
	printf("Addition is:%f ",ans);
	ans=a-b;
	printf("Subtraction is:%f \n",ans);
	ans=a*b;
	printf("Multiplication is:%f \n",ans);
	ans=a/b;
	printf("Division is:%f",ans);
}
