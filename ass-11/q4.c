#include<stdio.h>
int prime(int n);
int main()
{
    int n,np;
    printf("Enter number ");
    scanf("%d",&n);
    np=prime(n);
    if(np==1)
        printf("not prime number");
    else
        printf("prime number ");
    
}
int prime(int n)
{
    int i,n1,temp=0;
    for(n1=;1;n1++)
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
            break;
        else
        {
            n1=n;
            break;
        }
    }
    if(n%n1==0)
        

    
}