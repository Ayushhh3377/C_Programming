// check factors number 
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue =0;
    int icnt=0;
     printf("Enter Number:\n");
    scanf("%d",&iValue);
    for(icnt =1; icnt<= iValue; icnt++)
    {
        printf("%d\n",icnt);
    }


    return EXIT_SUCCESS;
}