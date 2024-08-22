#include<stdio.h>
main(){
	int i,k,j,n;
	printf("Enter rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){ //row
		for(k=1;k<=n-i;k++){  //space
			printf(" ");
		}
		for(j=1;j<=n;j++)  //column
		{ 
			printf("*");  //space before star
		}
		printf("\n");
	}
}
