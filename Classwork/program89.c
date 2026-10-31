// check factors number 
#include<stdio.h>
#include<stdlib.h>
void Display(int ino)
{
    int icnt=0;
    for(icnt =1; icnt<= ino; icnt++)
    {
        printf("%d\n",icnt);
    }
}

int main()
{
    int iValue =0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return EXIT_SUCCESS;
}