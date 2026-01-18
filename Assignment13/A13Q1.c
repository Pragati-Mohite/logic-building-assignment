#include<stdio.h>
#include<stdbool.h>

void print_numbers(int number)
{    
    for(int iCnt = 1 ; iCnt <= number ; iCnt++)
    {
        printf("%d\t",iCnt);
    }    
}
int main()
{
    int limit = 0 ;

    printf("Enter number : ");
    scanf("%d",&limit);

    print_numbers(limit);

    return 0;
}