#include<stdio.h>

int CountDiff(int number)
{    
    int iDigit = 0 , iSum1 = 0 , iSum2 = 0;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        
        if(iDigit % 2 == 0) 
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        
        number = number / 10;
    }
    return iSum1-iSum2;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("%d\n",iRet);
    
    return 0;
}