#include<stdio.h>
int square(int n);
int main()
{
    int n,sq;
    printf("Enter number ");
    scanf("%d",&n);
    sq=square(n);
    printf("square is %d",sq);

}
int square(int n)
{
    return(n*n);
}