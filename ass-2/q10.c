#include<stdio.h>
int main()
{
    int x,n;
    printf("Enter the number");
    scanf("%d",&n);
    x=n%10;
    n=n-x;
    printf("%d",n);
}