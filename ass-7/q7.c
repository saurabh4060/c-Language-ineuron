#include<stdio.h>
int main()
{
    int i,x=0,n;
    
    for(n=10;n<=50;n++)
    {
        x=0;
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            x=1;
        }
        if(x==0)
        { 
            printf("%d ",n);
            break;
        }

    }
}