/*
     ---------------------------------
              operation ||-OR
    ---------------------------------
    Result1   Result2   FINAL result
    ---------------------------------
    TRUE       TRUE     TRUE   //Short circuit
    TRUE       FALSE    TRUE  // short circuit
    FALSE      TRUE     TRUE
    FALSE      FALSE    FALSE
    ---------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
void CheckDivsible(int ino)
{
    if(((ino % 3)== 0) || ((ino % 5 )== 0))
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