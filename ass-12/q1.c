#include<stdio.h>
void printN(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printN(n);
}
void printN(int n)
{
    int s;
    if(n>0)
    {   printN(n-1);
        printf("%d ",n);
    }

}