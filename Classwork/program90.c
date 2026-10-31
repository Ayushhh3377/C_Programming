// check factors number 
#include<stdio.h>
#include<stdlib.h>
int Summation(int ino)
{
    int icnt=0; int isum =0;
    for(icnt =1; icnt<= ino; icnt++)
    {
        isum = isum + icnt;
    }
    return isum;
}
int main()
{
    int iValue =0; int iRet = 0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    Summation(iValue);
    printf("Summation is: %d\n",iRet);

    return EXIT_SUCCESS;
}