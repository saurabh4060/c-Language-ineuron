#include<stdio.h>
int main()
{
   int month;
   printf("Enter month 1 To 12 :");
   scanf("%d",&month);
   if(month==1 ||month==3||month==5||month==7||month==8||month==10||month==12)
        printf("Days are 31");
    else
    {
        if(month==4||month==6||month==9||month==11)
            printf("Days are 30");
        else 
        {
            if (month==2)
                printf("Days are 29 or 28");
            else
                printf("pleas Enter valid number between 1 to 12");
        }
        
            
    }
        

    
        
}