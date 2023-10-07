#include<stdio.h>
int lcm(int a, int b);
int main()
{
    int a,b,l;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    l=lcm(a,b);
    printf("Lcm is %d",l);
    return 0;
}

int lcm(int a, int b)
{
    int i,temp=0;
    for(i=1;i<a*b;i++)
    {
        if(i%a==0&&i%b==0)
        {
            temp=1;
            break;
        }

    }
    if(temp==1)
        return (i);
}