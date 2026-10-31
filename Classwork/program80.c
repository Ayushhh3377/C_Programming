//input =5
//ot 1+2+3+4+5 =15
// input 8
// 1+2+3+4++5+6+7+8 =36


#include<stdio.h>
#include<stdlib.h>
int summation(int ino)
{
    int icnt =0 ;
    int isum = 0;
    for(icnt =1; icnt<=ino; icnt++)
    {
        isum= isum + icnt;
    }
    return isum;
}

int main()
{
    int ivalue = 0; 
    int iret = 0;
    printf("Enter the frequency : \n");
    scanf("%d", &ivalue);

    iret = summation(ivalue);
    printf("summation is : %d\n",iret);
    

   return EXIT_SUCCESS ;
}