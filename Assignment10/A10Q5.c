#include <stdio.h>

double SquareMeter(int iNo)
{
    return (iNo * 0.0929);
} 

int main()
{
    int iValue = 0 ;
    double dRet = 0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    printf("In square : %lf",dRet);

    return 0;
}

