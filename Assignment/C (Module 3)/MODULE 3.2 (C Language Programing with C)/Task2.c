//WAP to swap two numbers without using third variable
#include <stdio.h>
main() {
  int a, b; //data members
  printf("Enter a: ");
  scanf("%d", &a);	//input first  number	//20
  printf("Enter b: ");
  scanf("%d", &b);	//input second  number 	//5

  a = a + b;   //20+5 = 25
  b = a - b;   //25-5 = 20 = b  swapped
  a = a - b;   //25-20 = 5	= a	 swapped

  printf("After swapping, a = %d\n", a);	//5
  printf("After swapping, b = %d", b);		//20
}
