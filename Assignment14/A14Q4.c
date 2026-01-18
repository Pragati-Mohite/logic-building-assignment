#include<stdio.h>

int CountFour(int number)
{    
    int iDigit = 0 , iCount = 0;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        if(iDigit == 4)
        {
            iCount++;
        }

        number = number / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("Number of 4 in %d is %d\n",iValue , iRet);
    
    return 0;
}