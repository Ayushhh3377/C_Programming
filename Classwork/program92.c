#include<stdio.h>
#include<stdlib.h>
int Factorial(int ino)
{
    int icnt=0, iFact = 0;
   
    for(icnt =1 , iFact =1; icnt<= ino; icnt++)
    {
        iFact = iFact * icnt;
    }
    return iFact;
}
int main()
{
    int iValue =0; int iRet = 0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    iRet= Factorial(iValue);
    printf("Factorial is: %d\n",iRet);

    return EXIT_SUCCESS;
}