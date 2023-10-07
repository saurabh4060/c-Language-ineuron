#include<stdio.h>
int main()
{
    int a[3],i,max,j;
    printf("Enter 10 number ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        
    }
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("max is %d",max);
    return 0;

}