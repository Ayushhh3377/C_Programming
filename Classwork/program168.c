/*
// input 6457 -> 22 -> 5.5
// input 734 -> 14 -> 4.66
// input 45 -> 9-> 4.5
*/

#include<stdio.h>
#include<stdlib.h>
int AverageDigits(int iNo)
int iDigit = 0 ;
float favg= 0.0;
int iSum = 0
if(iNo < 0)
(
    iNo = -iNo;
)
while(iNo != 0)
{   
    iDigit = iNo % 10; 
    iSum = 
    iNo =iNo /10;

}





int main()
{   
    int iValue = 0;
    float fRet = 0.0f;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

     fRet = AverageDigits(iValue);
    printf("Average of Digits :%d\n",fRet);

    return EXIT_SUCCESS;
}