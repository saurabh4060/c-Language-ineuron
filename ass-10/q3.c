#include<stdio.h>
int evenodd(int n);
int main()
{
    int n,x;
    printf("Enter the number ");
    scanf("%d",&n);
    x=evenodd(n);
    printf("%d",x);





}
int evenodd(int n)
{

    if(n%2==0)
        return 1;
    else
        return 0;

}