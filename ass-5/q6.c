#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<=n*2-1;i++)
    {
        if(i%2==0)
            printf("%d ",i);
    }
}