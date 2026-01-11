#include <stdio.h>

double FhtoCs(float fTemp)
{
    return ((fTemp - 32) * ((float)5/9));
} 

int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("In celsius : %lf",dRet);

    return 0;
}

