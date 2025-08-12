/*Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle. How to calculate diameter, circumference and area of a circle whose radius is given by user in C programming. Logic to find diameter, circumference and area of a circle in C.*/
#include<stdio.h>
int main()
{
    int radius;
    printf("Enter the value of radius:\n");
    scanf("\n%d",&radius);
    printf("radius=%d\n",radius);

    float pai = 3.14;
    int diameter = 2*radius;
    float circumference = 2*3.14*radius;
    float area = 2*3.14*(radius*radius);

    printf("Diameter=%d\n",diameter);
    printf("Circumference=%.1f\n",circumference);
    printf("Area=%.1f", area);
    return 0;

}



