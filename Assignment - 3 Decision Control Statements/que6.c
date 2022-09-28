/*Write a program to print greater between two numbers. Print one number of both are
the same.*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers :\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("%d; both number are the same",a);
    }
    else 
    {
        if(a>b)
        {
            printf("%d is greater number",a);
        }
       else
        {
            printf("%d is greater number",b); 
        }
    
    }
    return 0;
}