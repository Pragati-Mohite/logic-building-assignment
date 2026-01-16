#include<stdio.h>

int sum_of_even_factors(int number)
{
    int iSum = 0;
    
    if(number < 0)
    {
        number = -number;
    }
    for(int iCnt=1 ; iCnt <= number/2 ; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            if(number % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
    }
    return iSum;
}
int main()
{
    int number=0 ;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("%d\n",sum_of_even_factors(number));

    return 0;
}