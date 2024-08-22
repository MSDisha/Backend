#include<stdio.h>
main(){
	char a[5],b[5];
	int i;
	printf("Enter name: ");
	gets(a);
	strcpy(b,a);
	printf("Length of copied string: %s",b);
}
