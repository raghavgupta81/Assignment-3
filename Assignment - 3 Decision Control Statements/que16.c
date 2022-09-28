/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character :\n");
    scanf("%c",&a);
    if(a>=65&&a<=122)
    {
        if(a<=90)  
        printf("%c is a uppercase alphabet character",a);
        else if(a>=97)
        printf("%c is a lowercase alphabet character",a);
        else
        printf("%c is a special character",a);    
    }
    else 
    {
        if(a>=48&&a<=57)
        printf("%c is a digit character",a);
        else 
        printf("%c is a special charecter",a);
    } 
    
    return 0;
}
