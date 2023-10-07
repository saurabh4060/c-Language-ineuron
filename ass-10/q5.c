#include<stdio.h>
void odd(int n);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    odd(n);
}

void odd(int n)
{
    int i;
    for(i=1;i<=n*2;i++)
    {
        if(i%2!=0)
            printf("%d ",i);
    }
}