#include<stdio.h>

int MultDigits(int number)
{    
    int iDigit = 0 , iMult = 1;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        
        if(iDigit != 0) 
        {
            iMult = iMult * iDigit;
        }
        
        number = number / 10;
    }
    return iMult;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("%d\n",iRet);
    
    return 0;
}