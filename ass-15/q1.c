#include<stdio.h>
int gn(int b[],int);
int main()
{
    int ma,s;
    printf("Array of sizes");
    scanf("%d",&s);
    int a[s];
    ma=gn(a,s);
    printf("greatest number is %d ",ma);

}
int gn(int b[],int n)
{
    int i,max;
    printf("Enter %d sizes array :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
    }
    return max;

}

