#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5 ;iCnt++)
    {
        printf("%d\t",iNo*iCnt);
        // if(iCnt == 7)
        // {
        //     break;
        // }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}