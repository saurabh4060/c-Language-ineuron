#include<stdio.h>
void binary(int n);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    binary(n);
}
void binary(int n)
{
    if(n>0)
    {
        binary(n/2);
        printf("%d",n%2);
    }
    
    
}