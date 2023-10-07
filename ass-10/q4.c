#include<stdio.h>
void natural(int n);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    natural(n);
}

void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}