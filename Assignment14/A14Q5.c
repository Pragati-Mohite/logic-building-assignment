#include<stdio.h>

int Count(int number)
{    
    int iDigit = 0 , iCount = 0;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);
    printf("numbers having frequency less than 6 are %d\n",iRet);
    
    return 0;
}