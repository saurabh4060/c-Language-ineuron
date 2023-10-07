#include<stdio.h>
void even(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    even(n);
}
void even(int n)
{
    if(n==0)
        return;
    even(n-1);
    printf("%d ",n*2-2);
}