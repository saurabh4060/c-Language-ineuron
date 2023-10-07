#include<stdio.h>
fb(int p,int c,int n);
int main()
{
    int prev=0,cur=1,n;
    printf("Enter number");
    scanf("%d",&n);
    fb(prev,cur,n);
}
fb(int p,int c,int n)
{
    int next,i;
    printf("1 ");
    for(i=1;i<n;i++)
    {
        next=p+c;
        printf("%d ",next);
        p=c;
        c=next;
    }

}
