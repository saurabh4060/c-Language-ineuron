#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter string :");
    fgets(str,20,stdin);
    printf("%s",strupr(str));

}