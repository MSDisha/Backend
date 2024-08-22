//WAP to find area of circle, rectangle and triangle
#include<stdio.h>
main(){
    float rad, len, wid, base, height, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &rad);
    area = 3.14* rad * rad;
    printf("Area of circle: %.2f\n", area);

    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &len, &wid);
    area = len* wid;
    printf("Area of the rectangle: %.2f\n", area);

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of the triangle: %.2f\n", area);
}

