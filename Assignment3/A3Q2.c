#include <stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if(iNo % iCnt == 0 && iCnt % 2 == 0 || iCnt == 1)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}

