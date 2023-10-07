#include<stdio.h>
#include<string.h>
int main()
{
    int i,a[5],b[5],j;
    printf("ENter array numbers :");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
    
        b[i]=a[i];
        printf("%d ",b[i]);

        
    }

    
}