//file management
//There are three thype in file management
//WRITE
//READ
//APPEND
#include<stdio.h>
main(){
	FILE*fptr;
	fptr = fopen("test1.txt","r");
	char a[100];
	fgets(a,100,fptr);
	printf("%d",a)
	fclose(fptr);
}
