#include<stdio.h>
#include<string.h>
int main()
{
    int i,counta=1,countd=1,counts=1;
    char str[20];
    printf("Enter string :");
    fgets(str,20,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>'A' && str[i]<'Z' || str[i]>'a' && str[i]<'z')
        {
            counta++;
            break;
        }

        else
        { 
            if(str[i]>0 && str[i]<10)
                countd++;
            else
                counts++;
        }
        
    }
    printf("total alphabet is %d \ntotal digit is %d \nspecial charcter is %d",counta,countd,counts);
}