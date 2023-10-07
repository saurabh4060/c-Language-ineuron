#include<stdio.h>
float area(int r);
int main()
{
    int r;
    printf("Enter radius");
    scanf("%d",&r);
    printf("Area of Circle is %f",area(r));
}
float area(int r)
{
    return 3.14*r*r;
}