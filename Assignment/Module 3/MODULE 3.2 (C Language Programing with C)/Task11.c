//WAP to print Fibonacci series up to given numbers  
#include<stdio.h>
main(){
	int n1=0,n2=1,n,i;	//data members 
	printf("Enter Terms : ");
	scanf("\n%d",&n);	//input numbers 
	
	printf("\n%d",n1);	//0
	printf("\n%d",n2);	//1
	
	for(i=3;i<=n;i++){
		int n3=n1+n2; 
		printf("\n%d",n3);
		n1=n2;	//swap
		n2=n3;	//swap
	}
}

