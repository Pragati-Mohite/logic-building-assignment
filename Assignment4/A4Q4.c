#include <stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0 , iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0 )
        {
           iSum = iSum + iCnt;
        }
    }
    return iSum;
} 

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = NonFact(iValue);
    printf("Summation of Non factors of value is : %d",iRet);
    
    return 0;
}

