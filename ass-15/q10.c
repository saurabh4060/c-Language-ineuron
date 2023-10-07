#include<stdio.h>
void un(int a[],int n);
int main()
{
    int s;
    printf("size of array ");
    scanf("%d",&s);
    int a[s];
    un(a,s);
}
void un(int a[],int n)
{
    int i,j,m=0,b[100],count;
    printf("Enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=-1;
                b[i]=count;
            }
            
        
        } 
        b[i]=count;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("No of %d is %d",a[i],b[i]);
        }
        printf("\n");
    }

}