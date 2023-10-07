#include<stdio.h>
int main()
{
    int i,n,count=0;   
    printf("Enter the Number ");
    scanf("%d",&n);
    for(i=1;n;i++)
    {
        n=n/10;
        count++;
    }
    printf("%d",count);
    
}