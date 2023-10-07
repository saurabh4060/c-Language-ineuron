#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%7==0)
        printf("Number is divisible by 7 ");
    else
    { 
        if(n%3==0)
            printf("Number divisible by 3 ");
    }
}