//Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a alphabet :\n");
    scanf("%c",&a);
    if(a>=65&&a<=90)
    {
        printf("%c is uppercase",a);
    }
    else
    {
        printf("%c is lowercase",a);
    }
    return 0;
}