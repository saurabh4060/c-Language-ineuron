#include<stdio.h>
void primef(int n);
int main()
{
    int n;
    printf("Enter number ");
    scanf("%d",&n);
    primef(n);

}
void primef(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
        while (n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
        
    }

}
