#include<stdio.h>

int count_factors(int number)
{
    int iCount = 0;
    for(int iCnt=1 ; iCnt <= number/2 ; iCnt++)
    {
        if(number % iCnt == 0)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int number=0 ;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("%d\n",count_factors(number));

    return 0;
}