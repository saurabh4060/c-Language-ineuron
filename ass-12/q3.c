#include<stdio.h>
void odd(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    odd(n);
}
void odd(int n)
{
    if(n==0)
        return;
    odd(n-1);
    printf("%d ",2*n-1);
}