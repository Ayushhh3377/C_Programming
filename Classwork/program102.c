#include<stdio.h>
#include<stdlib.h>
void DisplayFactors(int ino)
{
    int icnt=0;
    printf("Factors of %d are :\n",ino);

    for(icnt =1; icnt<= ino/2; icnt++)
    {
        if ( (ino % icnt) == 0 )
        {
            printf("%d\n",icnt);
        }
      
    }
}

int main()
{
    int iValue =0;
    
    printf("Enter Number:\n");
    scanf("%d",&iValue);
    
    DisplayFactors(iValue);

    return EXIT_SUCCESS;
}
// Time Complexit : O(N/2) 