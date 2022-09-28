/*Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include<stdio.h>

int main()
{
    float cp,sp;
    printf("Enter the cost price :\n");
    scanf("%f",&cp);
    printf("Enter the selling price :\n");
    scanf("%f",&sp);
    if(cp>sp)
    {
         printf("loss persentage is =%f%%",(cp-sp)/cp*100);
    }
    else
    { 
        printf("profit persentege is =%f%%",(sp-cp)/cp*100);
    }
    return 0;
}