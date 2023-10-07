#include<stdio.h>
int main()
{
    int r,c;
    printf("valuse of row and column ");
    scanf("%d%d",&r,&c);

    int a[r][c],i,j;
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                printf("%d",a[i][j]);

            }
        }
        printf("\n");
    }

    
}