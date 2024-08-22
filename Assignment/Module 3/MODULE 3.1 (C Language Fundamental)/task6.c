//WAP to convert years into days and days into years 
#include<stdio.h>
main(){
	int year,days;
	printf("Enter year: ");
	scanf("%d",&year);
	printf("\nDays are : %f", (float)year*365);
	printf("\nEnter Days: ");
	scanf("\n%d",&days);
	printf("Years are: %f",(float)days/365);
}

