#include<stdio.h>
int main()
{
    int i,n,d;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        d=n%10;
        n=n/10;
        if(d)
            printf("%d ",d);
    }
}