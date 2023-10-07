#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0,i,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;1;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;;
        if(next==n || n==0)
        {    
            printf("a given number is there in the Fibonacci series");
            break;
        }
        if(next>n)
        {    
            printf("a given number is not  in the Fibonacci series");
            break;
        }
            

    }
    

}