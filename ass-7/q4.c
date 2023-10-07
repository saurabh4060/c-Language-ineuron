#include<stdio.h>
int main()
{
    int a,b,hcf,i;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;a*b;i++)
    {
        if(i%a==0&i%b==0)
        {
            break;
        }
    }
    printf("Lcm is %d",i);
    hcf=a*b/i;
    printf("\nHcf is %d",hcf);
}