#include<stdio.h>
int fact(int n);
int main()
{
    int n,x;
    printf("Enter number ");
    scanf("%d",&n);
    printf("factorial is %d",fact(n));
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
       
    }
    return fact;

}