/*Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter sides of triangle a, b and c :\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c&&a<b+c)
    printf("triangle");
    else if(b>c&&b>a&&b<a+c)
    printf("triangle");
    else if(c>a&&c>b&&c<a+b)
    printf("triangle");
    else
    printf("not triangle");
    return 0;
}