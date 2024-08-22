#include<stdio.h>
main(){
	int i=1,n,ev=0,od=0,evcount=0,odcount=0;
	while(i<=5){
		printf("\nEnter numbers: ");
		scanf("%d",&n);
		if(n%2==0){
			printf("\n%d id Even",n);
			ev++;
			evcount=evcount+n;
		}
		else{
			printf("\n%d is odd",n);
			od++;
			odcount=odcount+n;
		}
		i++;
	}
	printf("\nEven numbers are : %d ",ev);
	printf("\nOdd numbers are : %d ",od);
	printf("\nSum of Even numbers are : %d ",evcount);
	printf("\nSum of Odd numbers are : %d ",odcount);
}
