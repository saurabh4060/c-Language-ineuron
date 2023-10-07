#include<stdio.h>
int  fact(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("%d",fact(n));
    
}
int fact(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fact(n-1);
}