//Length of the string 
#include<stdio.h>
main(){
	char a[5];
	int i,len=0;	//data members 
	printf("Enter Name: ");
	gets(a);		//input string
	for(i=0;a[i]!='\0';i++){	//loop if a is not equals to null
	len++;		//increment
	}
	printf("Length of string: %d",len);
}

