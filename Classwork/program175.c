// accept the number from user and  print reverse the number 


#include<stdio.h>
#include<stdlib.h>
int Reverse(int iNo)
{   
    int iDigit = 0;
    int iRev = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+ iDigit;
        iNo =iNo /10 ;
    }
        return iRev;
}




int main()
{   
    int iValue =0 , iRet = 0;
   
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    
    printf("Reverse number is :%d",iRet);
    return EXIT_SUCCESS;
}