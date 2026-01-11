#include <stdio.h>
#include<stdbool.h>

float Percentage(int iTotalMarks , int iObtainedMarks)
{
    float percentage = 0.0;

    if(iTotalMarks == 0)
    {
        return -1;
    }
    if(iObtainedMarks == 0)
    {
        return 0.0;
    }

    /*
    if(iTotalMarks == 0)
    {
        return -1;       // Error code
    }

    if(iObtainedMarks == 0)
    {
        return 0.0;      percentage == 0%
    }

    */
    percentage = ((float)iObtainedMarks/iTotalMarks)*100;
    
    return percentage;
} 

int main()
{
    int iTotalMarks = 0 , iObtainedMarks = 0;
    float fResult = 0;

    printf("Enter total and obtained marks: ");
    scanf("%d%d", &iTotalMarks,&iObtainedMarks);

    fResult = Percentage(iTotalMarks , iObtainedMarks);
    
    if(fResult == -1)
    {
        printf("Total marks cannot be 0 ");
    }
    else if(fResult == 0.0)
    {
        printf("you are fail");
    }
    else
    {
        printf("Percentage = %f ",fResult);
    }

    /*
    if(fResult == -1)
    {
        printf("Total marks cannot be 0");
    }
    else
    {
        printf("Percentage = %f", fResult);
    }
    */

    return 0;
}

