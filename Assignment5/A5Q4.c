#include <stdio.h>

void CheckNumberType(int Num)
{
   if(Num > 0)
   {
    printf("%d is a Positive Number",Num);
   } 
   else if(Num < 0)
   {
    printf("%d is a Negative Number",Num);
   }   
   else
   {
    printf("it is Zero");
   }
} 

int main()
{
    int iNumber = 0 ;

    printf("Enter Number: ");
    scanf("%d", &iNumber);

    CheckNumberType(iNumber);
    
    return 0;
}

