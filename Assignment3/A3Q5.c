#include <stdio.h>
#include<stdbool.h>>

bool DisplayVowels(char cValue)
{
    if(cValue=='a' || cValue=='e' || cValue=='i' || cValue=='o' || cValue=='u' ||
       cValue=='A' || cValue=='E' || cValue=='I' || cValue=='O' || cValue=='U')
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf("%c", &cValue);

    bRet = DisplayVowels(cValue);
    
    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}

