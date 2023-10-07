#include<stdio.h>
int n;
int main()
{
    printf("Enter the number");
    scanf("%d",&n);
    n=n%10;
    printf("%d",n);
}