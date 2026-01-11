#include <stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 65 && cValue <= 90 )
    {
        printf("%c",cValue+32);
    }
    else if(cValue >= 97 && cValue <= 122)
    {
        printf("%c",cValue-32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}

