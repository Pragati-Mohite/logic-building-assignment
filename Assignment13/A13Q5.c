#include<stdio.h>
#include<stdbool.h>

int sum_even_numbers(int number)
{    
    int iSum = 0;
    for(int iCnt = 1 ; iCnt <= number ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }    
    return iSum;
}
int main()
{
    int limit = 0 ;

    printf("Enter number : ");
    scanf("%d",&limit);

    printf("%d\n",sum_even_numbers(limit));

    return 0;
}