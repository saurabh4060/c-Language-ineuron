#include<stdio.h>
int main()
{
    int i,count=0;
    char str[20];
    printf("Enter string :");
    fgets(str,20,stdin);
    
    for(i=0;i<str[i];i++)
    {
        if('a'==str[i] || 'e'==str[i] ||'i'==str[i] || 'o'==str[i] || 'u'==str[i])
        {
            count++;
        }
    }
    printf("count vowels is %d",count);
}