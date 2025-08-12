/*Write a C program to input length in centimeter and convert it to meter and kilometer. How to convert length from centimeter to meter and kilometer in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.*/

#include<stdio.h>
int main()
{
    int cm;
    printf("Enter length value in centimeter:\n");
    scanf("\n%d",&cm);
    printf("Length in centimeter=%d\n",cm);

    float m = cm/100;
    printf("Length in meter=%.2f\n",m) ;

    float km = m/1000;
    printf("Length in kilometer=%.2f\n",km);
    return 0;
}
