#include<stdio.h>
int  odd(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("%d",odd(n));
    
}
int odd(int n)
{
    if(n>0)
    {
        return 2*n-1+odd(n-1);
    }
    
}