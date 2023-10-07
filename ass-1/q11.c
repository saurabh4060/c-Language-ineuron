#include<stdio.h>
int HH,MM;
int main()
{
    printf("Enter the time in format HH:MM");
    scanf("%d:%d",&HH,&MM);
    printf("Hours -  %d Minutes - %d",HH,MM);
}