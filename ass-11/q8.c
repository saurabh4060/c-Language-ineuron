#include<stdio.h>
int fact(int n);
int combination(int n,int r);
int pascal(int n);
int main()
{
    pascal(5);

    return 0;


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

int combination(int n,int r)
{

    int com;
    com=fact(n)/(fact(r)*fact(n-r));

    return com;



}

int permu(int n,int r)
{

    int per;
    per=fact(n)/fact(n-r);

    return per;



}
int  pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
}



