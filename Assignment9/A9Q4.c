#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0 , iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iCount = iCount * iCnt;
        }
    }
    
    return iCount;
} 

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    printf("Even Factorial of number is %d",iRet);

    return 0;
}

