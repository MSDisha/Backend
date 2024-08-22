//WAP to take two Array input from user and sort them in ascending or 
//descending order as per user’s choice  
#include<stdio.h>
main(){
	int a[6],i,j,temp;
	
	for(i=0;i<6;i++){
	    printf("Enter elements: ");
	    scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	printf("\n Asc order are: %d",a[i]);
	}
	
	for(i=0;i<6;i++){
		for(j=i+1;j<6;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	printf("\n Desc order are: %d",a[i]);
	}
}


