#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iIndex = -1;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
             iIndex = iCnt;
        }
    }
    return iIndex;
}

int main()
{
    int iSize = 0 , iCnt = 0, iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

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

    iRet = LastOcc(ptr, iSize, iValue);
    if (iRet != -1)
    {
        printf("%d is present in the array at index(last index) %d\n", iValue, iRet);
    }
    else
    {
        printf("%d", iRet);
        printf("\n");
    }

    return 0;

}