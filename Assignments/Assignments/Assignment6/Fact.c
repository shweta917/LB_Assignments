#include<stdio.h>

int Factorial(int iNo) {

    int iCnt = 0;

    if (iNo < 0 ) {
        iNo = -iNo;  
    } 

    for (iCnt = iNo-1; iCnt > 0; iCnt--) {
        iNo = iNo * iCnt;
    }

    return iNo;
}

int main() {

    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}