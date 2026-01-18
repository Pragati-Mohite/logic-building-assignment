#include<stdio.h>
#include<stdbool.h>

void Display_Digit(int number)
{    
    int iDigit = 0;
    if(number < 0)
    {
        number = -number;
    }
    while(number != 0)
    {
        iDigit = number % 10;
        printf("%d\n",iDigit);
        number = number / 10;
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display_Digit(iValue);

    return 0;
}