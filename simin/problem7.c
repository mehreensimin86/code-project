/* Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple interest in C programming. Logic to find simple interest in C program.*/

#include<stdio.h>
int main()
{
    int p;
    printf("Enter value for principle:\n");
    scanf("\n%d",&p);
    printf ("Principle=%d\n",p);
    int t;
    printf("Enter value for time:\n");
    scanf("\n%d",&t);
    printf("Time=%d\n",t);
    int r;
    printf(" Enter value for rate:\n");
    scanf("\n%d",&r);
    printf("Rate=%d\n",r);
    float si= (p*t*r)/100;
    printf("Simple Interest=%.2f",si);
    return 0;






}
