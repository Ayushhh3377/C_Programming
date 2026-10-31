#include<stdio.h>
#include<stdlib.h>
long long int Factorial(int ino)
{
    int icnt=0; 
    long long int iFact = 0;
   
    for(icnt =1 , iFact =1; icnt<= ino; icnt++)
    {
        iFact = iFact * icnt;
    }
    return iFact;
}
int main()
{
    int iValue =0; 
    long long int iRet = 0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    iRet= Factorial(iValue);
    printf("Factorial is: %lld\n",iRet);

    return EXIT_SUCCESS;
}