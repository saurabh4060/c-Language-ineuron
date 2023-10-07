#include<stdio.h>
int main()
{
    int i,j;
    char min;
    char str[20];
    printf("Enter sting");
    fgets(str,20,stdin);
    for(i=0;str;i++)
    {
        for(j=i+1;str;j++)
        {
            min=str[0];
            if(min<str[j])
            {
                min=str[j];
                break;
            }
        }
    }
    
}