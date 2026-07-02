#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Elements:");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
        {
             printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0 , iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *ptr = NULL;

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

    printf("Enter the start range: ");
    scanf("%d", &iValue1);

    printf("Enter the end range: ");
    scanf("%d", &iValue2);

    Range(ptr, iSize, iValue1, iValue2);

    return 0;

}