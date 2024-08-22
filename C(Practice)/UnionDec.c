#include<stdio.h>
union myunion{
	int a[8],i,j,temp;
}s1,s2,s3,s4;

main(){
	for(s2.i=0;s2.i<8;s2.i++){
		printf("Enter number a: ");
	    scanf("%d",&s1.a[s2.i]);
	}
	for(s2.i=0;s2.i<8;s2.i++){
		for(s3.j=s2.i+1;s3.j<8;s3.j++){
			if(s1.a[s2.i]<s1.a[s3.j]){
				s4.temp=s1.a[s2.i];
				s1.a[s2.i]=s1.a[s3.j];
				s1.a[s3.j]=s4.temp;
			}
		}
	printf("\n Desc order are: %d",s1.a[s2.i]);
	}
	
}
