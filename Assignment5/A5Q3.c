#include <stdio.h>

void CheckLeapYear(int Year)
{
   if(Year % 4 == 0)
   {
    printf("%d is a leap year",Year);
   } 
   else
   {
    printf("%d is not a leap year",Year);
   }   
} 

int main()
{
    int iYear = 0 ;

    printf("Enter Year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);
    
    return 0;
}

