#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter three number");
   scanf("%d%d%d",&a,&b,&c);
   if(a+b>c&&a+c>b&&b+c>a)
        printf("Trangle is valid");
    else
        printf("trangle is not valid");



    
        
}