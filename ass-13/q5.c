#include<stdio.h>
int  digit(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("%d",digit(n));
    
}
int digit(int n)
{
    if(n>0)
    {
        return n%10+digit(n/10);
    }
}