//Concatenation 
#include<stdio.h>
main(){
	char a[5],b[5],result[20];	//data members
	int i,j;
	printf("Enter string 1 : ");
	gets(a);	//input string 1
	printf("Enter string 2 : ");
	gets(b);	//input string 2
	for(i=0;a[i]!='\0';i++){
		result[i]=a[i];	//assigning using 3rd variable 
	}
	for(j=0;b[j]!='\0';j++){
		result[i+j]=b[j];	
	}
	result[i+j]='\0';
	printf("Concat : %s",result);
}

