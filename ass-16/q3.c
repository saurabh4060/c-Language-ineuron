#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,tran=0;
    printf("Enter number");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
            

        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            tran=a[j][i];
            printf("%d",tran);
        }
        printf("\n");
    }
}