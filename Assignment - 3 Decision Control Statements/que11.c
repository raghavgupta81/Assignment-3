/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    int phy,che,bio,math,eng;
    printf("Enter marks of five subjects :\n");
    scanf("%d%d%d%d%d",&phy,&che,&bio,&math,&eng);
    if(phy>=33&&che>=33&&bio>=33&&math>=33&&eng>=33)
    {
        printf("The candidate has passed the examination");
    }
    else
    {
        printf("The candidate has failed the examination");
    }


    return 0;
}