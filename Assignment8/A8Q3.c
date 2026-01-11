#include <stdio.h>

int Factorial(int iNo)
{
   int iFact = 1;
   
   if(iNo < 0)
   {
     iNo = -iNo;
   }
   
   for(int iCnt = 1; iCnt <= iNo ;iCnt++)
   {
     iFact = iFact * iCnt;
   } 

   return iFact;
} 

int main()
{
    int iValue = 0 , iResult = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iResult = Factorial(iValue);
    printf("Factorial is : %d\n",iResult);
    
    return 0;
}

