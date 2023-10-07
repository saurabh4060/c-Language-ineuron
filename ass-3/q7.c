#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,D;
    float x,y;

    printf("Enter the coefficent a,b,c :");
    scanf("%d%d%d",&a,&b,&c);
    D=b*b-(4*a*c);
    if(D<0)
        printf("Root are imaginary");
    if(D==0)
    {
        printf("Both roots are equal");
        x=-b/2.0*a;
        printf("%f",x);

    }
    if(D>0)
    {
        printf("Roots are real and distinct :");
        x=(-b+sqrt(D))/2.0*a;
        y=(-b-sqrt(D))/2.0*a;
        printf("%f %f",x,y);
    }

}