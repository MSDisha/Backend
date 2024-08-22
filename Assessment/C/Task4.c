//Copy a string 
#include<stdio.h>
main(){
	char a[5],b[5];	//data members 
	int i;
	printf("Enter name: ");
	gets(a);	//enter string
	for(i=0;a[i]!='\0';i++){
		b[i]=a[i];	//Assigning value 
	}
	b[i]='\0';	//till null
	printf("Length of copied string: %s",b);
}

