#include<stdio.h>

int CountEven(int number)
{    
    int iDigit = 0 , iCount = 0;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        if(iDigit % 2 == 0)
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

    iRet = CountEven(iValue);
    printf("%d\n",iRet);
    
    return 0;
}