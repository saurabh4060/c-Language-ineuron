#include<stdio.h>
int main()
{
    int n,temp,a,sum=0;
    printf("Enter number :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        sum=sum+(a*a*a);
        n=n/10;


    }
    if(temp==sum)
        printf("number is amstrong");
    else
        printf("not amstrong");
    
}