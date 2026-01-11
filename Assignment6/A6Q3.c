#include <stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1 , int iNo2)
{
   if(iNo1 == iNo2)
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
    int iNum1 = 0 ,iNum2 = 0 ;
    bool bResult = 0;

    printf("Enter two numbers: ");
    scanf("%d%d", &iNum1,&iNum2);

    bResult = ChkEqual(iNum1,iNum2);
    
    if(bResult == true)
    {
        // printf("%d and %d are equal ",iNum1,iNum2);
        printf("Equal");
    }
    else
    {
        // printf("%d and %d are not equal ",iNum1,iNum2);
        printf("Not Equal");
    }
    
    return 0;
}

