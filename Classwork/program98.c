#include<stdio.h>
#include<stdlib.h>

typedef unsigned long long ULONG;
ULONG Factorial(int ino)
{
    int icnt=0; 
    ULONG iFact = 0;
   
    for(icnt =1 , iFact =1; icnt<= ino; icnt++)
    {
        iFact = iFact * icnt;
    }
    return iFact;
}
int main()
{
    int iValue =0; 
    ULONG iRet = 0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    iRet= Factorial(iValue);
    printf("Factorial is: %lld\n",iRet);

    return EXIT_SUCCESS;
}