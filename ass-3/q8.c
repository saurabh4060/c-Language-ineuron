#include<stdio.h>
int main()
{
    int year;
    printf("Enter the Number");
    scanf("%d",&year);
    if((year%4==0)&&(year%400==0)||(year%100!=0))
        printf("%d leap year",year);
    else
        printf("Not a leap year");
}