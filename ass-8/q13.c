#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i||j>=6+i)
            {
                if(j<7)
                    printf("%c",k++);
                else
                    printf("%c",k--);
            }
            else
            {
                printf(" ");
                if(j==7)
                    k--;
            }
               
        }
        printf("\n");
    }
}