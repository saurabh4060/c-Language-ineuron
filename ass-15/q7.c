#include<stdio.h>
void count_a(int a[],int n);
int main()
{
    int s;
    printf("Enter size of array ");
    scanf("%d",&s);
    int a[s];
    count_a(a,s);
}
void count_a(int a[],int n)
{
    int i,b,j,count=0;
    printf("Enter %d number ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            
        }
    }
    printf("duplicate element in the array is %d",count);
}