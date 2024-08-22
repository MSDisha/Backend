//WAP to show difference between Structure and Union. 
#include<stdio.h>
struct Mystruct{
	int a,b;
};
union MyUnion{
	int a,b;
};


main(){
	printf("Structure");
	struct Mystruct s1;
	union MyUnion S1,S2;
	printf("\nEnter a number : ");
	scanf("%d",&s1.a);
	printf("Enter a number : ");
	scanf("%d",&s1.b);
	printf("Addition : %d",s1.a + s1.b);
	
	printf("\nUnion");
	printf("\nEnter a number : ");
	scanf("%d",&S1.a);
	printf("Enter a number : ");
	scanf("%d",&S2.b);
	printf("Addition : %d",S1.a - S2.b);
}




