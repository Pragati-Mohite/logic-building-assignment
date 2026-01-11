#include <stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0 , iSum1 = 0 , iSum2 = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt != 0 )
        {
           iSum1 = iSum1 + iCnt;
        }
        else if(iNo % iCnt == 0 )
        {
           iSum2 = iSum2 + iCnt;
        }
    }
    
    return (iSum2 - iSum1);
} 

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = NonFact(iValue);
    printf("Difference of Non factors and factors of value is : %d",iRet);
    
    return 0;
}

