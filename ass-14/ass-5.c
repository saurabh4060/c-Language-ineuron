#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("Enter 10 numbers :");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

        

    }
    for(i=0;i<=9;i++)
    {
        min=a[0];
        if(min>a[i])
            min=a[i];
    }
    printf("min is %d",min);
    return 0;
}