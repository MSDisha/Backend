 //Write a program of structure for five employee that provides the following 
//information -print and display empno, empname, address and age 
#include <stdio.h>

struct Employee {
    int empno,age;	//data member
    char empname[50],address[100];

}s1[5];

main() { 

    int i;
    for (i = 0; i < 5; i++) {
        printf("Enter details for employee %d:\n", i + 1);	//input numbers
        printf("Employee number: ");
        scanf("%d", &s1[i].empno);	//input num
        printf("Employee name: ");
        scanf("%s", &s1[i].empname); //input name
        printf("Employee address: ");
        scanf("%s", &s1[i].address);	//input add
        printf("Employee age: ");
        scanf("%d", &s1[i].age);	//input age
    }
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee number: %d\n", s1[i].empno);
        printf("Employee name: %s\n", s1[i].empname);
        printf("Employee address: %s\n", s1[i].address);
        printf("Employee age: %d", s1[i].age);   

    }
}
