//input =5
//ot 1+2+3+4+5 =15
// input 8
// 1+2+3+4++5+6+7+8 =36


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int icnt = 0; 
    int isum = 0;

    icnt =1;

    //isum +1; ->1
    isum =isum = icnt;
    icnt++;
    icnt =2;
    isum =isum +icnt;
    icnt++;
    icnt=3;
    isum= isum+icnt;
    icnt++;
    icnt=4;
    isum=isum+icnt;
    icnt++;
    printf("%d\n",isum);

   return EXIT_SUCCESS ;
}