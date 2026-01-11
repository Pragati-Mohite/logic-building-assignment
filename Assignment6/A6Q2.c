#include <stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
   if(iNo > 100)
   {
        return true;
   } 
   else
   {
        return false;
   }   
} 

int main()
{
    int iNum1 = 0 ;
    bool bResult = 0;

    printf("Enter number: ");
    scanf("%d", &iNum1);

    bResult = ChkGreater(iNum1);
    
    if(bResult == true)
    {
        printf("%d is Greater than 100 ",iNum1);
    }
    else
    {
        printf("%d is smaller than 100 ",iNum1);
    }
    
    return 0;
}

