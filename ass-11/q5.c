#include<stdio.h>
void prime(int);
int main()
{
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    prime(n);

}
void prime(int k)
{
    int i,n,x=0;
    for(n=1;n<=k;n++)
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
