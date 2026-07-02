#include<stdio.h>

void Table(int iNo) {

    int iCnt = 0;

    if (iNo < 0) {
        iNo = -iNo;
    }

    for (iCnt = 10; iCnt > 0; iCnt--) {
        printf("%d * %d = %d\n", iNo, iCnt, iNo * iCnt);
    }
}

int main() {

    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}