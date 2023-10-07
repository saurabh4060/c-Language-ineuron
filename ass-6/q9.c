#include<stdio.h>
int main()
{
    int i,a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(i=2;a*b;i++)
    {
        if((i%a==00)&&(i%b==0))
        {
                break;
        }
    }
    printf("Lcm is %d",i);
}