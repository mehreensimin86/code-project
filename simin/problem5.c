/*Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.*/

#include<stdio.h>
int main()
{
    int c ;
    printf("Enter temperature value in celcius:\n");
    scanf("\n%d",&c);
    printf("temperature in celcius=%d\n",c);

    float f = (c*9/5)+32;
    printf(" Temperature value in Fahrenheit=%.1f\n",f);
    return 0;
}
