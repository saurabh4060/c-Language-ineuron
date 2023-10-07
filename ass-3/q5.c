#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<=999&&n>=100)
        printf("Three digit number");
    else
        printf("Not three digit number");

}