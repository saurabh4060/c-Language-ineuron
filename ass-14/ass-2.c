#include<stdio.h>
int main()
{
    int a[10],i;
    float sum=0;
    printf("Enter 10 numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    printf("Avrage is %f",sum/10);
}