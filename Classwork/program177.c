// accept the number from user and  check wheter it is pallindrome 


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{   
    int iDigit = 0;
    int iRev = 0;
    int iTemp = iNo;


    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+ iDigit;
        iNo =iNo /10 ;
    }
    if(iRev == iTemp)     // issue SOLWED
    {
        return false;
    }
    else
    {   
        return true;
    }

          
        
}




int main()
{   
    int iValue =0 ; bool bRet = false;
   
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if (bRet==true)
    {
        printf("The Number is Palliendrome \n"); 
    }
    else
    {
        printf("The Number is Not  Palliendrome \n"); 
    }
   
    return EXIT_SUCCESS;
}