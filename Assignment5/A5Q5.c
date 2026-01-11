#include <stdio.h>

int FindLargest(int No1 , int No2 , int No3)
{
   if(No1>No2)
   {
        if(No1 > No3)
        {
           return No1;
        }
        else
        {
            return No3;
        }
   } 
   else
   {
        return No2;
   }   
} 

int main()
{
    int iNum1 = 0 , iNum2 = 0 , iNum3 = 0 ,iResult = 0;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &iNum1,&iNum2,&iNum3);

    iResult = FindLargest(iNum1,iNum2,iNum3);
    printf("Maximum is : %d\n",iResult);
    
    return 0;
}

