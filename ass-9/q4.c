#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    printf("\n1. Isosceles Traiangle");
    printf("\n2. Right Angled Triangle");
    printf("\n3. Equilateral Triangle");
    printf("\n4. Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
            printf("Enter three numbers :");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b || a==c || b==c)
                printf("isosceles triangle");
            else
                printf("Not isosceles triangle");
            break;

        case 2:
            printf("Enter three numbers :");
            scanf("%d%d%d",&a,&b,&c);
            if((a*a==b*b+c*c) || (b*b==c*c+a*a) || (c*c==a*a+b*b))
                printf("Right angle triangle");
            else
                printf("Not Right angle triangle");

        case 3:
            printf("Enter three numbers :");
            scanf("%d%d%d",&a,&b,&c);
            if(a==b&&a==c&&b==c)
                printf("Equilateral  triangle");
            else
                printf("Not Equilateral triangle ");
            break;
        case 4:
            exit(0);

        


    }
}