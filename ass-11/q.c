#include<stdio.h>
void prime(int k);
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    prime(n);

}

void prime(int k)
{
    int n,i,temp=0;
    for(n=1;n<k;n++)
    {
        temp=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
                temp=1;
        }
        if(temp==0)
            printf("%d ",n);
    }

}