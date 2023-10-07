#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum=0,s=2;
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
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==s )
            {
                printf("%d",a[i][j]);
                sum=sum+a[i][j];
                
            }
            else
                printf(" ");
        }
        s=s-1;
        printf("\n");
    }
    printf("Sum is %d",sum);
}