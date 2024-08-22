#include<stdio.h>
#include<stdlib.h>
main(){
	printf("*********Welcome to the game*************");
	printf("\n*********Enter number between 1 to 50*************");
	while(1) //infinite loop
	{
		int n=rand()%50;
		int choice;
		printf("\nEnter number : ");
		scanf("%d",&choice);
		if(choice>50){
			printf("Invalid number");
			break;
		}
		else if(choice==n){
			printf("You are win");
			break;
		}
		else if(choice<n){
			printf("%d is Smaller than original number",choice);
		}
		else{
			printf("%d is greater than original number",choice);
		}
		
	}
}
