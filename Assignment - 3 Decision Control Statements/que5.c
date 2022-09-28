//Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a given number :\n");
    scanf("%d",&a);

    if(a>99&&a<1000)
    printf("%d is a three-digt number",a);
    else
    printf("%d is not a three-digit number",a);
    
    return 0;
}