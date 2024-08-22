//file management
//There are three thype in file management
//WRITE
//READ
//APPEND
#include<stdio.h>
main(){
	FILE*fptr;
	fptr = fopen("test1.txt","a");
	fprintf(fptr,"\nHello world!!This is a Append method");
	fclose(fptr);
}
