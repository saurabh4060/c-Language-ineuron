#include<stdio.h>
int main()
{
    int i,n,x;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            x=1;
            break;
        }
    }
    if(x==1)
        printf("not a prime");
    else
        printf("prime");
}