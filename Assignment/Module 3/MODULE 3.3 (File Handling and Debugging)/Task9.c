// Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age  
#include <stdio.h>
struct Employee {
    int empno,age;
    char empname[10],address[20];
}s1;

main() {
    printf("Enter Employee Number: ");
    scanf("%d", &s1.empno);

    printf("Enter Employee Name: ");
    scanf(" %s", s1.empname); 

    printf("Enter Employee Address: ");
    scanf(" %s", s1.address);

    printf("Enter Employee Age: ");
    scanf("%d", &s1.age);

    printf("Employee Number: %d\n", s1.empno);
    printf("Employee Name: %s\n", s1.empname);
    printf("Employee Address: %s\n", s1.address);
    printf("Employee Age: %d\n", s1.age);

}

