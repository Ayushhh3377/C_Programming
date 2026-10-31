// accept the number from user and  check wheter it is pallindrome 


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{   
    int iDigit = 0;
    int iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+ iDigit;
        iNo =iNo /10 ;
    }
    if(iRev == iNo)     // issue bug
    {
        return false;
    }
    else
    {   
        return true;
    }

          
        return iRev;
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
        printf("The Number is Palliendrome \n"); 
    }
   
    return EXIT_SUCCESS;
}