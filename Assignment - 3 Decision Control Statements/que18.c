/*Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter month number :\n");
    scanf("%d",&a);
  
        if(a==2)
        {
            printf("28");
        }
        else
        {
            if(a>7 && a%2==0)
               printf("31");
            else 
            {
             if(a<=7 && a%2==1)
               printf("31");
             else
             printf("30");  
            }
        }
    return 0;
}