#include<stdio.h>
#include<stdbool.h>

void print_odd_numbers(int number)
{    
    for(int iCnt = 1 ; iCnt <= number ; iCnt++)
    {
        if( iCnt % 2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }    
}
int main()
{
    int limit = 0 ;

    printf("Enter number : ");
    scanf("%d",&limit);

    print_odd_numbers(limit);

    return 0;
}