/*
// input 6457 -> 22 -> 5.5
// input 734 -> 14 -> 4.66
// input 45 -> 9-> 4.5
*/

#include<stdio.h>
#include<stdlib.h>
float AverageDigits(int iNo)
{
    int iDigit = 0 ,iCount = 0 ,iSum = 0;
    float fAvg =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {   
        iDigit = iNo % 10; 
        iSum = iSum + iDigit;
        iCount++;
        iNo =iNo /10;
    }

        fAvg=iSum / iCount;// need of typecastings
        return fAvg;
}



int main()
{   
    int iValue = 0;
    float fRet = 0.0f;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

     fRet = AverageDigits(iValue);
    printf("Average of Digits :%f\n",fRet);

    return EXIT_SUCCESS;
}