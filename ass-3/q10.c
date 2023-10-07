#include<stdio.h>
int main()
{
    int sp,cp;
    printf("Enter the selling price and cost price");
    scanf("%d%d",&sp,&cp);
    if(sp>cp)
        printf("profit");
    else
        if(cp>sp)
            printf("Loss");
        else
            printf("No Profit No loss");
        

}