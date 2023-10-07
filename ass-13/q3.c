#include<stdio.h>
int  even(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    printf("%d",even(n));
    
}
int even(int n)
{
    if(n>0)
    {
        return 2*n-2+even(n-1);
    }
}