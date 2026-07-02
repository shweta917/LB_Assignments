#include<stdio.h>


int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if (iNo < 0) // Updator
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("The factorial of even numbers is : %d\n", iRet);

    return 0;
}