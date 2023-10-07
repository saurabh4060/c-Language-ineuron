#include<stdio.h>
#include<string.h>
int main()
{
    char str[20],cpy[20];
    printf("Enter string :");
    
    printf("%s",strcpy(cpy,fgets(str,20,stdin)));
    printf("\n");
    printf("%s",cpy);

}