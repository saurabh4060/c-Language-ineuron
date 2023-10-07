#include<stdio.h>
int main()
{
    int n,temp,a,sum=0,i;
    for(i=1;i<1000;i++)
    { 
        temp=n;
        n=i;
        while(n)
        {
            a=n%10;
            sum=sum+(a*a*a);
            n=n/10;


        }
        if(temp==sum)
            printf("number is amstrong");
        else
            printf("not amstrong");
    }
    
}