#include <stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = iNo/2; iCnt >= 1 ; iCnt--)
    {
        if(iNo % iCnt == 0 || iCnt == 1)
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

    FactRev(iValue);
    
    return 0;
}

