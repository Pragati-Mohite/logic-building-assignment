#include<stdio.h>
#include<stdbool.h>

int sum_natural_numbers(int number)
{    
    int iSum = 0;
    for(int iCnt = 1 ; iCnt <= number ; iCnt++)
    {
        iSum = iSum + iCnt;
    }    
    return iSum;
}
int main()
{
    int limit = 0 ;

    printf("Enter number : ");
    scanf("%d",&limit);

    printf("%d\n",sum_natural_numbers(limit));

    return 0;
}