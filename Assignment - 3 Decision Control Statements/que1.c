//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a given number : ");
    scanf("%d",&a);
    if(a<0)
    printf("%d is non-positive number",a);
    else
    printf("%d is positive number",a);


    return 0; 
}