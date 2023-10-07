#include<stdio.h>
int main()
{
    int a[10],i,so=0,se=0;
    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else
            so=so+a[i];
    }
    printf("so is %d and se is %d",so,se);
    return 0;
}