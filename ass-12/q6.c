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
    printf("%d ",n*2-2);
    even(n-1);
    
}