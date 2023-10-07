#include<stdio.h>
void ra(int a[],int n);
int main()
{
    int s;
    printf("Enter size of array ");
    scanf("%d",&s);
    int a[s];
    ra(a,s);

}
void ra(int a[],int n)
{
    int i;
    printf("Enter %d number",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}