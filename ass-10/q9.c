#include<stdio.h>
int reslut(int n,int d);
int main()
{
    int n,d,r;
    printf("Enter number and digit ");
    scanf("%d%d",&n,&d);
    r=reslut(n,d);
}
int reslut(int n,int d)
{
    int a,i;
    for(i=1;i<n;i++)
    {    a=n%10;
        n=n/10;
        if(d==a)
        {    
            printf("digit in number ");
            break;
        }
        else
        {
            printf("digit not in nmber ");
            break;
        }
    }
}
