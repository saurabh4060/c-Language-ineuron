#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0;
    printf("Enter numbers");
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
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
            
        }
        printf("\n");
    }
    printf("sum of rows and column is %d ",sum);
}