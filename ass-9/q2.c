#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char x;
    printf("\na. Addition");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\ne. Exit");
    printf("Enter Your Choice :");
    scanf("%c",&x);
    switch (x)
    {
    case 'a':
        printf("Enter two Number :");
        scanf("%d%d",&a,&b);
        printf("%d",a+b);
        break;
    case 'b':
        printf("Enter two Number :");
        scanf("%d%d",&a,&b);
        printf("%d",a-b);
        break;
    case 'c':
        printf("Enter two Number :");
        scanf("%d%d",&a,&b);
        printf("%d",a*b);
        break;
    case 'd':
        printf("Enter two Number :");
        scanf("%d%d",&a,&b);
        printf("%d",a/b);
        break;
    case 'e':
        exit(0);
    default:
        printf("Enter valid choice ");
        break;
    }
}