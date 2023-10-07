#include<stdio.h>
int main()
{
    int x;
    printf("\n1.sunday");
    printf("\n2.monday");
    printf("\n3.tuesday");
    printf("\n4.Wensday");
    printf("\n5.thursday");
    printf("\n6.Friday");
    printf("\n7.satrday");
    printf("\nEnter the choice :");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("Sunday - Fun day");
        break;
    case 2:
        printf("Monday - after weekend first day of office");
        break;
    case 3:
        printf("Tuesday - Shopping day");
        break;
    case 4:
        printf("Wensday - market day");
        break;
    case 5:
        printf("Thursday - submmistion days");
        break;
    case 6:
        printf("Friday - Second last Day of Weekend ");
        break;
    case 7:
        printf("Satrday - Excieted for  Weekend");
        break;
    default:
        printf("Enter Valid day ");
        break;
    }
}