#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char ch) {
    // checking only lower case
    if (ch == 'a' || ch == 'e' || ch == 'i' ||
        ch == 'o' || ch == 'u')
{
        return true;
    }

    return false;
}

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (CheckVowel(ch)) {
        printf("%c is vowel.\n", ch);
    } else {
        printf("%c is not vowel.\n", ch);
    }

    return 0;
}