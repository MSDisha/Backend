
#include<stdio.h>
main(){
	int n1,n2;
	printf("Enter value of n1 : ");
	scanf("%d",&n1);
	printf("Enter value of n2 : ");
	scanf("%d",&n2);
	if(n1>n2){
		printf("%d is greater than %d",n1,n2);
	}
	else{
		printf("%d is greater than %d",n2,n1);
	}
}
