#include<stdio.h>
void oct(int n);
int main()
{
    int n;
    printf("Enter the number ");
    scanf("%d",&n);
    oct(n);
}
void oct(int n)
{
    if(n>0)
    {
        oct(n/8);
        printf("%d",n%8);
    }
    
    
}