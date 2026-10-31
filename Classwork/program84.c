#include<stdio.h>
#include<stdlib.h>
void CheckDivsible(int ino)
{
    if((ino % 5)== 0)
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