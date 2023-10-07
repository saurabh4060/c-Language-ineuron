#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the three number ");
    scanf("%d",&n);
    a=n%10;n=n/10;
    printf("%d%d",a,n);
}