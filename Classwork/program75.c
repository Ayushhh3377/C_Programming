#include<stdio.h>
#include<stdlib.h>
void display(int ino)
{
        int icnt = 0;
        for(icnt =ino ; icnt>=1; icnt--);
        {
        printf("%d\t",icnt);
        }
        printf("\n");
    
}
int main()
{
    int ivalue =0 ;
    printf("Enter frequency: \n");
    scanf("%d", &ivalue);
    return EXIT_SUCCESS ;
}