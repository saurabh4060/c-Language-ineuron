#include<stdio.h>
void sq(int n);
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    sq(n);

}
void sq(int n)
{
    if(n==0)
        return;
    sq(n-1);
    printf("%d ",n*n);
}
