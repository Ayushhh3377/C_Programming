/*
    ---------------------------------
        operation &&
    ---------------------------------
    Result1   Result2   FINAL result
    ---------------------------------
    TRUE       TRUE     TRUE
    TRUE       FALSE    FALSE
    FALSE      TRUE     FALSE // short circuit 
    FALSE      FALSE    FALSE // short circuit
    ---------------------------------

*/
#include<stdio.h>
#include<stdlib.h>
void CheckDivsible(int ino)
{
    if(((ino % 3)== 0) && ((ino % 5 )== 0))
    {
        printf("it is divisible :\n ");
    }

    else
    {
        printf("it is not divsible:\n");
    }
}
int main()
{
    int iValue =0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    CheckDivsible(iValue);

    return EXIT_SUCCESS;
}