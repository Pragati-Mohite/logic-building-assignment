#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}

