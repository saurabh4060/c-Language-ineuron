#include<stdio.h>
int main()
{
    int i,count=0;
    char str[20];
    printf("Enter string :");
    fgets(str,20,stdin);
    char a;
    printf("Enter char ");
    scanf("%c",&a);
    for(i=0;str[i];i++)
    {
        if(a==str[i])
        {
            count++;
        }

    }
    printf("%c is %d",a,count);
}