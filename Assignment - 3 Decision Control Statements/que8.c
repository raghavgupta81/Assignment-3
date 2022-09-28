//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>

int main()
{
  int y;

   printf("Enter a year :\n");
   scanf("%d",&y);
  if(y%100!=0 && y%4==0 ||y%400==0)
    printf("%d is a leap year");
  else
    printf("%d is not a not leap year");

    return 0;
}
