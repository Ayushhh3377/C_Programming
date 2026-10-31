// Accept number from user and check is it divisible by 3
#include<stdio.h>
#include<stdlib.h>
void CheckDivsible(int ino)
{
    if(ino % 3== 0)
    {
        printf("it is divisible :\n ");
    }
    else
    {
        printf("it is not divsiblr:\n");
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