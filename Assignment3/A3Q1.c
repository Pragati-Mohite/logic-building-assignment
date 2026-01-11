// #include<stdio.h>

// void PrintEven(int iNo)
// {
//     int iCnt = 0;
//     int iCount = 0;
//     if(iNo < 0)
//     {
//         iNo = -iNo;
//     }
//     for(iCnt = 1 ; iCnt <= (iNo*2) ; iCnt++)
//     {
//         if(iCnt % 2 == 0)
//         {
//             printf("%d\t",iCnt);
//             iCount++;
//             if(iCount == iNo)
//             {
//                 break;
//             }
//         }
//     }
// }
// int main()
// {
//     int iValue = 0;
    
//     printf("Enter number");
//     scanf("%d",&iValue);
   
//     PrintEven(iValue);

//     return 0;
// }


#include <stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(int iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t", iCnt * 2);
    }
}

int main()
{
    int iValue;

    printf("Enter number: ");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}

