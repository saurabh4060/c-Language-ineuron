#include<stdio.h>
int main()
{
    int prev=0,cur=1,next=0,i,num;
    printf("ENter the number");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        next=prev+cur;
        prev=cur;
        cur=next;

    }
    printf("%d",next);
    
}