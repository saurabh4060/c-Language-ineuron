#include<stdio.h>
int main()
{
    int x;
    printf("\n1.Jan");
    printf("\n2.Feb");
    printf("\n3.March");
    printf("\n4.April");
    printf("\n5.May");
    printf("\n6.June");
    printf("\n7.July");
    printf("\n8.Aug");
    printf("\n9.Sep");
    printf("\n10.Oct");
    printf("\n11.Nov");
    printf("\n12.Dec");
    printf("\nEnter Your choice : ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf(" %d - Days are 31");
        break;
    case 2:
        printf("Days are 29 Or 28");
        break;
    case 3:
        printf("Days are 31");
        break;
    case 4:
        printf("Days are 30");
        break;
    case 5:
        printf("Days are 31");
        break;
    case 6:
        printf("Days are 30");
        break;
    case 7:
        printf("Days are 31");
        break;
    case 8:
        printf("Days are 31");
        break;
    case 9:
        printf("Days are 30");
        break;
    case 10:
        printf("Days are 31");
        break;
    case 11:
        printf("Days are 30");
        break;
    case 12:
        printf("Days are 31");
        break;
    
    default:
        printf("Enter valid Number ");
        break;
    }
}