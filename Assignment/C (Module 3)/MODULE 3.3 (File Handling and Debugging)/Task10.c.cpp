//WAP to show difference between Structure and Union. 
#include<stdio.h>
struct Mystruct{	//structure
	int a,b;	//data members 
};
union MyUnion{		//union
	int a,b;	//data members 
};


main(){
	printf("Structure");
	struct Mystruct s1;	//Variable for structure
	union MyUnion S1,S2;	//Variable for union
	printf("\nEnter a number : ");
	scanf("%d",&s1.a);	//input num 
	printf("Enter a number : ");
	scanf("%d",&s1.b);	//input num 
	printf("Addition : %d",s1.a + s1.b);	//Additon
	
	printf("\nUnion");
	printf("\nEnter a number : ");
	scanf("%d",&S1.a);	//input num 
	printf("Enter a number : ");
	scanf("%d",&S2.b);	//input num 
	printf("Subtraction : %d",S1.a - S2.b);	//Subtraction
}




