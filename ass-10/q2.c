#include<stdio.h>
float sp(int p,int t,float r);
int main()
{
    int p,t;
    float r;
    printf("Enter price time rate ");
    scanf("%d%d%f",&p,&t,&r);
    printf("simple interest is %f",sp(p,t,r));
}
float sp(int p,int t,float r)
{
    return (p*r*t)/100;
}