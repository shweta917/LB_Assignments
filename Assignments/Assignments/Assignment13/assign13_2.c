#include<stdio.h>
#include<stdlib.h>

void DivisibleByFive(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("Numbers divisible by 5 are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iRet = 0;
    int *Brr = NULL;

    printf("Enter the number of elements :");
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }

    DivisibleByFive(Brr, iLength);

    free(Brr);

    return 0;
}