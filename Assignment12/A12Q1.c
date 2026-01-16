#include<stdio.h>

void print_factors(int number)
{
    for(int iCnt=1 ; iCnt <= number/2 ; iCnt++)
    {
        if(number % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    print_factors(number);

    return 0;
}