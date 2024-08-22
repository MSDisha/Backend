#include<stdio.h>
int main(){
	int a;
	printf("Enter your age: ");
	scanf("%d",&a);
	if(a>18){
		printf("Driving licence");
	}
	else if(a==18){
		printf("learning licence");
	}
	else{
		printf("not eligible");
	}
}
