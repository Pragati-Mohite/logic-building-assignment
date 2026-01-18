#include<stdio.h>

int CountRange(int number)
{    
    int iDigit = 0 , iCount = 0;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        if(3 < iDigit && iDigit < 7)
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

    iRet = CountRange(iValue);
    printf("%d\n",iRet);
    
    return 0;
}