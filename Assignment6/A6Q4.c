#include <stdio.h>
#include<stdbool.h>

int Multiply(int iNo1 , int iNo2 , int iNo3)
{
    if(iNo1 == 0) iNo1 = 1;
    if(iNo2 == 0) iNo2 = 1;
    if(iNo3 == 0) iNo3 = 1;
    
    return (iNo1 * iNo2 * iNo3);
} 

int main()
{
    int iNum1 = 0 ,iNum2 = 0 ,iNum3 = 0;
    int iResult = 0;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &iNum1,&iNum2,&iNum3);

    iResult = Multiply(iNum1,iNum2,iNum3);
    
    printf("Multiplication is : %d ",iResult);
    
    return 0;
}

