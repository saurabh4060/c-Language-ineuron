#include<stdio.h>
int permu (int n, int r);
int fact(int n);
int main()
{
    int n,r;
    printf("Enter two number ");
    scanf("%d%d",&n,&r);
    
    printf("Permu is %d",permu(n,r));
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

int permu (int n, int r)
{
    int p;
    p=fact(n)/fact(n-r);
    return p;
}

