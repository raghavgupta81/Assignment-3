//Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number :\n");
    scanf("%d",&a);
    if(a%7&&a%3)
    {
        printf("%d is not divisible by 7 or 3",a);
    }
    else
    {
        printf("%d is divisible by 7 or 3",a);
    }


    return 0;
}