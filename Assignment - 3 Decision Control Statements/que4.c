/*Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include<stdio.h>
int main()
{
    int a,x=0;
    printf("Enter a given number :\n");
    scanf("%d",&a);
    x=a/2;
    if(x*2==a)
    printf("%d is even number",a);
    else
    printf("%d is odd number",a);
    

    return 0;
}