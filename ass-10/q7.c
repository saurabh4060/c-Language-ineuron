#include<stdio.h>
int fact(int n);
int comb(int n,int r);
int main()
{
    int n,r;
    printf("Enter number ");
    scanf("%d%d",&n,&r);

    printf("comb is %d",comb(n,r));
    
}
int fact(int k)
{
    int i,fact=1;
    for(i=1;i<=k;i++)
    {
        fact=fact*i;
       
    }
    return fact;

}
int comb(int n,int r)
{
    int com;
    com=fact(n)/(fact(r)*fact(n-r));
    return com;
}