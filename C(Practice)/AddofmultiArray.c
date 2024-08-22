//Two dimensional array
//a[2][3] ,means 2 row and 3 column {{0,1,2}{3,4,5}}
                        
#include<stdio.h>
main(){
	int a[2][3],b[2][3];
	int i,j;
	//for a 
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
	   	printf("\n Enter Elements[%d][%d] : ",i,j);
	   	scanf("%d",&a[i][j]);
	   }
	}
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
	   	printf("%d\t ",a[i][j]);
	   }
	   printf("\n");
	}
	
	//For b
	
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
	   	printf("\n Enter Elements[%d][%d] : ",i,j);
	   	scanf("%d",&b[i][j]);
	   }
	}
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
	   	printf("%d\t ",b[i][j]);
	   }
	   printf("\n");
	}
	
	//Addition
	for(i=0;i<2;i++){
	   for(j=0;j<3;j++){
	   	printf("Addition : %d\t",a[i][j]+b[i][j]);
	   }
	   printf("\n");
	}
}
