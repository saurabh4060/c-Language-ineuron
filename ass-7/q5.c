#include<stdio.h>//lcm  i%a==0 && i%b==0
int main()//hcf  a*b/i
{
    int a,b,hcf,i;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    for(i=1;a*b;i++)
    {
        if(i%a==0 && i%b==0)
            break;
        
    }
    hcf=a*b/i;
    if(hcf==1)
        printf("co prime number");
    else
        printf("Not a co prime number");
}