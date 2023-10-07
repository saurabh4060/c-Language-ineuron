#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int n,m;
    printf("Enter number ");
    scanf("%d%d",&n,&m);
    printf("%d",hcf(n,m));
    
}
int hcf(int a,int b)
{
    if(b==0)
        return a;
    hcf(a,b);

}