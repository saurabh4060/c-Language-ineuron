#include<stdio.h>
void dig(int n);
int main()
{
    int n;
    printf("Enter digit ");
    scanf("%d",&n);
    dig(n);
    return 0;

}
void dig(int n)
{
    if(n==0)
        return 0;
    dig(n/10);
    printf("%d",n%10);

}