#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n>0)
        printf("Number is Positive");
    else
    {
        if(n<0)
            printf("Number is negative");
        else 
            printf("Number is zero");
    }
}