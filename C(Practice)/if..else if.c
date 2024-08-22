//if..else if..else

#include<stdio.h>
main(){
	int age;
	printf("Enter age : ");
	scanf("%d",&age);
	
	if(age>100){
		printf("Invalid age");
	}
	else if(age>=18){
		printf("Eligible!!");
	}
	else{
		printf("Not Eligible");
	}
}
