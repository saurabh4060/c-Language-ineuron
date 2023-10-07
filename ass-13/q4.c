#include<stdio.h>
int  sq(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("%d",sq(n));
    
}
int  sq(int n)
{
    if(n>0)
    {
        return n*n+sq(n-1);
    }
}