#include<stdio.h>
void prime(int k,int l);
int main()
{
    int n,n1;
    printf("Enter two Number");
    scanf("%d%d",&n,&n1);
    prime(n,n1);

}
void prime(int k,int l)
{
    int i,n,x=0;
    for(n=k;n<=l;n++)
    {
        x=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                x=1;

        }
        if(x==0)
            printf("%d ",n);
    }

}
