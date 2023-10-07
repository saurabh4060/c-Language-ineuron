#include<stdio.h>
int main()
{
    int n,a,b,sum=0;
    printf("Enter three digit number");
    scanf("%d",&n);
    a=n%10;n=n/10;
    b=n%10;n=n/10;
    sum=a+b+n;
    printf("%d",sum);

}