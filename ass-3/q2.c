#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%5==0)
        printf("Number is divisible by 5");
    else 
        printf("Number is not divisible by 5");
}
