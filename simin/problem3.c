/*Write a C program to input number of days from user and convert it to years, weeks and days. How to convert days to years, weeks in C programming. Logic to convert days to years, weeks and days in C program.*/
#include<stdio.h>
int main()
{
    int daysnumber;
    printf("Enter the number of days:\n");
    scanf("\n%d",&daysnumber);
    printf("daysnumber=%d",daysnumber);

    int years,weeks,days;
    years = (daysnumber/365);
    weeks = (daysnumber%365)/7;
    days = (daysnumber%365)%7;

    printf("Years=%d\n",years);
    printf("Weeks=%d\n",weeks);
    printf("Days=%d",days);
    return 0;
}
