#include<stdio.h>
int r;
float a;
int main()
{
    printf("Enter the radius ");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is %f having the radius %d",a,r);

}