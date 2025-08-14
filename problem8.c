//A C program to check if a given year is a leap year
#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year:\n");
    scanf("\n%d",&y);
    if (y%400==0)
    {
        printf( "%d is a leap year\n",y);
    }
    else if (y%100==0)
    {
        printf("%d is not a leap year\n",y);
    }
    else if(y%4==0)
    {
        printf("%d is a leap year\n",y);
    }
    else { printf("is not a leap year");}
    return 0;
}
