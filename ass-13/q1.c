#include<stdio.h>
int  sum(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("%d",sum(n));
    
}
int sum(int n)
{
    if(n==1)
        return 1;
    return n+sum(n-1);
       
}