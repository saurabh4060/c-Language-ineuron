#include<stdio.h>
int hcf(int a,int b);
int main()
{
    int a,b,Hcf,l;
    printf("Enter Two number");
    scanf("%d%d",&a,&b);
    l=hcf(a,b);
    Hcf=a*b/l;
    printf("Hcf is %d ",Hcf);

}

int hcf(int a,int b)
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
        return(i);
}