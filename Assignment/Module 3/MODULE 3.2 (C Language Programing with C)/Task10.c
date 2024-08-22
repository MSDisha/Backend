//WAP to print factorial of given number  
#include <stdio.h> 

main(){
  	int i, f=1, num;	//data members

  	printf("Enter the number : ");  
  	scanf("%d", &num); //input number

  	for(i = 1; i <= num; i++) {
  		f = f * i;	//factorial 5! = 5*4*3*2*1
  	}
    

  	printf("The Factorial is: %d\n", f); 	//120
}	

