#include<stdio.h>
main(){
	int a;
	printf("Enter the value of A : ");
	scanf("%d",&a);
	
	if(a<0){
		printf("Negative");
	}
	else if(a>=0){
		printf("positive");
	}
	else{
		printf("Inavalid");
	}
}
