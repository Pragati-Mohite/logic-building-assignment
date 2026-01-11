#include <stdio.h>

int KMtoMeter(int iNo)
{
    //   int iDistance = 0;
    return (iNo * 1000);
} 

int main()
{
    int iValue = 0 , iRet = 0;

    printf("Enter Distance in KM: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("In meter : %d",iRet);

    return 0;
}

