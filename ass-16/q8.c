#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0;
    printf("Enter numbers ");
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
            if(i<=j)
            {    
                printf("%d",a[i][j]);
                sum=sum+a[i][j];
            }
            else
                printf(" ");
                
       }
       printf("\n");
    }
    printf("sum is %d",sum);
    

}