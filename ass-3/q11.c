#include<stdio.h>
int main()
{
    int ml,os,hci,pA,cg;
    printf("Enter the marks ml,os,hci,pa,cg");
    scanf("%d %d %d %d %d",&ml,&os,&hci,&pA,&cg);
    if(ml>=33)
        printf("ml :Pass %d\n",ml);
    else
        printf("ml is failed %d\n",ml);
    if(os>=33)
        printf("Os :Pass %d\n",os);
    else
        printf("os is failed %d\n",os);
    if(hci>=33)
        printf("hci :Pass %d\n",hci);
    else
        printf("hci is failed %d\n",hci); 
    if(pA>=33)
        printf("pA :Pass : %d\n",pA);
    else
        printf("PA is failed %d\n",pA);

    if(cg>=33)
        printf("cg is pass : %d\n",cg);
    else
        printf("cg is failed %d\n",cg);        
}