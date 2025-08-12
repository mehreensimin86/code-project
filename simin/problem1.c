/* Write a C program that takes two integer variables as input and swaps their values. After swapping, the first variable should contain the value of the second, and the second should contain the value of the first.*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter value for a:\n");
    scanf("\n%d",&a);

    int b;
    printf("Enter value for b:\n");
    scanf("\n%d",&b);
    printf("Before swapping a =%d, b=%d\n",a,b);

    int x;
    x = a;
    a =b;
    b= x ;
    printf("After swapping values a = %d, b = %d", a,b);
    return 0;
}
