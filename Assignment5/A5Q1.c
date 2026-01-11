#include <stdio.h>

void CheckEvenOdd(int iNo)
{
   if(iNo % 2 == 0)
   {
    printf("Number is Even");
   } 
   else
   {
    printf("Number is not even");
   }   
} 

int main()
{
    int inumber = 0;

    printf("Enter number: ");
    scanf("%d", &inumber);

    CheckEvenOdd(inumber);
    
    return 0;
}

