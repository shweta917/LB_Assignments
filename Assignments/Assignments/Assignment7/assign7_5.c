#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iEvenFact = 1;
    int iOddFact = 1;
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    return (iEvenFact - iOddFact);

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("The difference between even and odd factorials is : %d\n", iRet);

    return 0;
}
