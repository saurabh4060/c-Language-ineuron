#include<stdio.h>
int main()
{
    int a[10],i,j,temp;
    printf("Enter 10 number ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=0;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
    }
    printf("second smallest is %d",a[1]);

}