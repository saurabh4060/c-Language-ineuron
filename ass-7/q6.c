#include<stdio.h>
int main()
{
    int i,n,x=0;
    for(n=1;n<=100;n++)
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