#include<stdio.h>
int main()
{
   char c;
    printf("Enter alphabet");
    scanf("%c",&c);
    
    if(c>='a'&&c<='z')
        printf("Lowercase");
    else if (c>='A'&&c<='Z')
    {
        printf("Uppercase");
    }
    
        
}