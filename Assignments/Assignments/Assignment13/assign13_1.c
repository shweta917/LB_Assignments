#include<stdio.h>
#include<stdlib.h>

int SummationdiffEvenOdd(int Arr[], int iSize)
{
    int iSumEven = 0, iSumOdd = 0, iDiff = 0, iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }
    iDiff = iSumEven - iSumOdd;
    return iDiff;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of elements :");
    scanf("%d", &iLength);

    Brr = (int *) malloc(sizeof(int)*iLength);

    printf("Enter the elements: ");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    iRet = SummationdiffEvenOdd(Brr, iLength);
    printf("The summation diff between even and odd is: %d", iRet);
 

    free(Brr);
    return 0;

}