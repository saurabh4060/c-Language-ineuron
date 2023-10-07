#include<stdio.h>
int main()
{
    int r,c;
    printf("valuse of row and column ");
    scanf("%d%d",&r,&c);

    int a[r][c],i,j,sum=0,count=0,S;
    printf("Enter  %d numbers ",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
        printf("\n");
    }
    S=r*c*2/3;
    if(count >=S)
    {
        printf("it is a sparse matrix  ");
    }
    else
        printf(" it is not asparse matrix ");
}