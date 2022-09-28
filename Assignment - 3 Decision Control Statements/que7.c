/*Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    printf("Enter leading cofficients of x square of quadratic equation :\n");
    scanf("%d",&a);
    printf("Enter cofficients of x of quadratic equation :\n");
    scanf("%d",&b);
    printf("Enter constant of quadratic equation :\n");
    scanf("%d",&c);
    d=(b*b)-4*(a*c);
    if(d==0)
    printf("Roots are real & equal");
    else
    {
        if(d>0)
        printf("Roots are real & distinct");
        else
        printf("Roots are imaginary");
    }
    
    return 0;
}