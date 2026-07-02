#include <stdio.h>

void Number(int iNo) {
    if (iNo < 50) {
        printf("Small\n");
    } else if (iNo >= 50 && iNo < 100) {
        printf("Medium\n");
    } else {
        printf("Large\n");
    }
}

int main() {
    int iValue;
    printf("Enter a number: ");
    scanf("%d", &iValue);
    Number(iValue);
    return 0;
}