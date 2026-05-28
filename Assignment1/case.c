#include <stdio.h>
#include <ctype.h>
void DisplayConvert(char cValue)
{
    if(isupper(cValue))
    {
        printf("%c", tolower(cValue));
    }
    else if(islower(cValue))
    {
        printf("%c", toupper(cValue));
    }
    else
    {
        printf("%c", cValue);
    }
}

int main
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}