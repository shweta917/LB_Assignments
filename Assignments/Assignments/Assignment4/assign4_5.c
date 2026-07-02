#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;


    for (iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if ((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
        else
        {
            iFactSum = iFactSum + iCnt;
        }
    }

    iFactSum = iFactSum - iNonFactSum;
    return iFactSum;

}

int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);
    printf("Diff of factors and non-factors: %d\n", iRet);
    return 0;
}

 