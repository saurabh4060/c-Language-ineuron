#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,pro=0;
    printf("Enter number");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);

        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            pro=a[i][j]*b[i][j];
            printf("%d ",pro);
            
        }
        printf("\n");
    }
    
}