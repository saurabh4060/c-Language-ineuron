#include<stdio.h>
int ad(int a[],int n);
int main()
{
    int s,k;
    printf("Size of array ");
    scanf("%d",&s);
    int a[s];
    k=ad(a,s);
    printf("value is %d",k);
}
int ad(int b[],int n)
{
    int i,j,sv=0;
    printf("Enter array numbers :");
    for(i=0;i<n;i++)
    {
        scanf(" %d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
                sv=b[i];

        }
    }

    return sv;
}