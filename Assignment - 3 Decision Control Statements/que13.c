//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);
    if(a%3||a%2)
    {
        printf("%d is not divisible by 3 and 2",a);
    }
    else
    {
        printf("%d is divisible by 3 and 2",a);
    }


    return 0;
}
