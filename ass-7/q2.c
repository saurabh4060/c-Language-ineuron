#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0,n,i;
    printf("Enter the number");
    scanf("%d",&n);
    printf("1");
    for(i=1;i<n;i++)
    {
        next=prev+cur;
        printf("%d",next);
        prev=cur;
        cur=next;
    }
}