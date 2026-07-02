#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main()
{
    int iSize = 0 , iCnt = 0, iValue = 0;
    int *ptr = NULL;
    BOOL bRet = 0;

    printf("Enter the number of elements: ");
    scanf("%d",&iSize);

    ptr = (int *) malloc(sizeof(int)*iSize);
    if(ptr == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d: ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &iValue);

    bRet = Check(ptr, iSize, iValue);
    if (bRet == TRUE)
    {
        printf("%d is present in the array\n", iValue);
    }
    else
    {
        printf("%d is not present in the array\n", iValue);
    }

    return 0;

}