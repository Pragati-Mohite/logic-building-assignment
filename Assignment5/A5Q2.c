#include <stdio.h>

int FindMax(int a , int b)
{
   if(a>b)
   {
        return a;
   } 
   else
   {
        return b;
   }   
} 

int main()
{
    int iNum1 = 0 , iNum2 = 0 ,iResult = 0;

    printf("Enter two numbers: ");
    scanf("%d%d", &iNum1,&iNum2);

    iResult = FindMax(iNum1,iNum2);
    printf("Maximum is : %d\n",iResult);
    
    return 0;
}

