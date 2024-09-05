// Write a program of structure employee that provides the following 
//information -print and display empno, empname, address and age  
#include <stdio.h>
struct Employee {	//structure
    int empno,age;
    char empname[10],address[20];	//data member
}s1;	//variable for struct

main() {
    printf("Enter Employee Number: ");
    scanf("%d", &s1.empno);	//input num

    printf("Enter Employee Name: ");
    scanf(" %s", s1.empname); //input name

    printf("Enter Employee Address: ");
    scanf(" %s", s1.address);	//input address

    printf("Enter Employee Age: ");
    scanf("%d", &s1.age);	//age

    printf("Employee Number: %d\n", s1.empno);	//showing
    printf("Employee Name: %s\n", s1.empname);		//showing
    printf("Employee Address: %s\n", s1.address);	//showing
    printf("Employee Age: %d\n", s1.age);		//showing

}

