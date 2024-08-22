//WAP to print Fibonacci series up to given numbers  
#include<stdio.h>
main(){
	int n1=0,n2=1,n,i;
	printf("Enter Terms : ");
	scanf("\n%d",&n);
	
	printf("\n%d",n1);
	printf("\n%d",n2);
	
	for(i=3;i<=n;i++){
		int n3=n1+n2;
		printf("\n%d",n3);
		n1=n2;
		n2=n3;
	}
}

