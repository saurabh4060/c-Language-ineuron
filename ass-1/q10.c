#include<stdio.h>
int DD,MM,Year;
int main()
{
    printf("Enter the date in format DD/MM/YYYY");
    scanf("%d/%d/%d",&DD,&MM,&Year);
    printf("Day -%d Month - %d Year - %d",DD,MM,Year);
}