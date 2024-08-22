#include<stdio.h>
struct structure{
	int a,b;
};


main(){
	struct structure s1;
	printf("Enter a number : ");
	scanf("%d",&s1.a);
	printf("Enter a number : ");
	scanf("%d",&s1.b);
	printf("Addition : %d",s1.a + s1.b);
}
