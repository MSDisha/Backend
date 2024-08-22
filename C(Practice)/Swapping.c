#include <stdio.h>
int main() {
  double a, b;
  printf("Enter a: ");
  scanf("%lf", &a);
  printf("Enter b: ");
  scanf("%lf", &b);

  // swapping without using 3rd variable
 
  a = a + b;   

  b = a - b;

  a = a- b;

  printf("After swapping, a = %.2lf\n", a);
  printf("After swapping, b = %.2lf", b);

}

