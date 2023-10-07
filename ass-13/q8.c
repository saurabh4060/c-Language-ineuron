#include<stdio.h>
int fab(int n);
int main()
{
    int i,n;
    printf("Enter number ");
    scanf("%d",&n);
   

    for(i=1;i<=n;i++)
    {
        printf("%d ",fab(i));
        
    }

    
}
int fab(int n)
{
    if(n==0 || n==1)
        return n;
    return fab(n-1)+fab(n-2);
    
}