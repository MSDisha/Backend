#include<stdio.h>
main(){
	int i,k,j;
	for(i=1;i<=6;i++){ //row
		for(k=1;k<=6-i;k++){  //space
			printf(" ");
		}
		for(j=1;j<=i;j++)  //column
		{ 
			printf(" *");  //space before star
		}
		printf("\n");
	}
}
