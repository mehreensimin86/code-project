//Write a C program to check whether two integers are equal.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter value for x:\n");
    scanf("\n%d",&x);
    printf("value x = %d\n",x);

    int y;
    printf("Enter value for y:\n");
    scanf("\n%d",&y);
    printf("value y = %d\n",y);

    if(x == y)
    {
        printf("two integers are equal\n");
    }

    else
    {
    printf("two integers are not equal\n");
    }
    return 0;
}
