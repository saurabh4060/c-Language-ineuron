#include<Stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers :");
    for(i=0;i<=3;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum is %d",sum);
    return 0;
}