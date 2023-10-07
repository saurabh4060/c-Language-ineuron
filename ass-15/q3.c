#include<stdio.h>
int sor(int b[],int n);
int main()
{
    int s,i,sort;
    printf("Enter size os array");
    scanf("%d",&s);
    int a[s];
    sort=sor(a,s);
    for(i=0;i<s;i++)
    {
        printf("%d",a[i]);
    }

}
int sor(int b[],int n)
{
    int i,j,temp;
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    return b[i];
}