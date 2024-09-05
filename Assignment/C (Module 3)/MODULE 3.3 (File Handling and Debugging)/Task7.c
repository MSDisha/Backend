//WAP Find out length of string without using inbuilt function  
#include<stdio.h>
main(){
	char a[5];
	int i,len=0;	//data members
	printf("Enter Name: ");	//input string
	gets(a);
	for(i=0;a[i]!='\0';i++){	//loop till its null
	len++;			//increment
	}
	printf("Length of string: %d",len);	
}
