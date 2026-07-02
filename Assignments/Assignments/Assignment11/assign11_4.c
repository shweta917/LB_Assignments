#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart > iEnd)
    {
        return -1;
    }
    else if (iStart < 0)
    {
        return -1;
    }


    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum += iCnt;
        }
    }
    
    printf("\n");
    return iSum;

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d", &iValue1);
    
    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Sum of numbers in the range is : %d\n", iRet);
    }

    return 0;

}