#include<stdio.h>
int prime(int n);
int main()
{
    int n,p;
    printf("Enter number");
    scanf("%d",&n);
    p=prime(n);
    if(p==1)
    {
        printf("Not a prime");
    }
    else
        printf("Prime number");
    return 0;

}
int prime(int n)
{
    int i,temp=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            temp=1;
            break;
        }

    }
    if(temp==1)
        return(temp);
    else
        return(temp);
}