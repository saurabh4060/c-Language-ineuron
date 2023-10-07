#include<stdio.h>
int sn(int b[],int );
int main()
{

    int s,sa;
    printf("ENter size of array");
    scanf("%d",&s);
    int a[s];
    sa=sn(a,s);
    printf("smallest is %d",sa);
}
int sn(int b[],int n)
{
    int i,min;
    
    printf("Enter %d numbers :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    min=b[0];
    for(i=0;i<n;i++)
    {
        if(min>b[i])
        {
            min=b[i];
        }
    }
    return min;

}