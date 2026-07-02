#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProduct = 0;

    for (iCnt = 0, iProduct = 1; iCnt < iLength; iCnt++)
    {
        if (Arr[iCnt] % 2 != 0)
        {
             iProduct = iProduct * (Arr[iCnt]);
        }
    }
    if (iProduct == 1)
    {
        return 0;
    }
    return iProduct;
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

    iRet = Product(ptr, iSize);
    printf("Product of odd elements in the array is %d\n", iRet);
    
    return 0;

}