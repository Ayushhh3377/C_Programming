#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 bool CheckPerfect( int ino)
{
    int icnt=0;
    int isum = 0;


    for(icnt =1; icnt<= ino/2; icnt++)
    {
        if ( (ino % icnt) == 0 )
        {
            isum = isum + icnt;

        }
    }
    return (isum == ino);
}
int main()
{
    int iValue =0 ; 
    bool bret = false ;
    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bret = CheckPerfect(iValue);

    if(bret ==  true)
    {
        printf("it is a perfect number\n");
    }
    else
    {
        printf("it is not a perfect number\n");
    }

    return EXIT_SUCCESS;
}
// Time Complexit : O(N/2) 