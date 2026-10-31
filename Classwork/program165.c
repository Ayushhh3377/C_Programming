//Display only even digits

#include<stdio.h>
#include<stdlib.h>
void DisplayDigits(int iNo)
{   
    int iDigit =0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo !=0)
    {   
        
        iDigit = iNo % 10;
        if((iDigit % 2)==0)
        {
            printf("the number is even : %d\n",iDigit);
            
            
        }
        else
        {
              printf("the number is odd: %d\n",iDigit);

        }
        iNo = iNo/10;
    }
}





int main()
{   
    int iValue = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}