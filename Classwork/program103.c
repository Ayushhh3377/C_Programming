#include<stdio.h>
#include<stdlib.h>
 SumFactors( ino)
{
    int icnt=0;
    int isum = 0;


    for(icnt =1; icnt<= ino/2; icnt++)
    {
        if ( (ino % icnt) == 0 )
        {
            isum = isum + icnt;

        }
        return isum ;

    }
}

int main()
{
    int iValue =0 ; 
    int iret =0 ;

    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    iret = SumFactors(iValue);

    printf("summation of factors:\n",iret);
    return EXIT_SUCCESS;
}
// Time Complexit : O(N/2) 