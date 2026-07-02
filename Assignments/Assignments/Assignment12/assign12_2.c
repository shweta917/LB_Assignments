#include<stdio.h>

# define True 1
# define False 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return True;
        }
        iNo = iNo / 10;
    }

    return False;
}


int main()
{
    int iValue = 0;
    BOOL bRet = False;
    printf("Enter a number : \n");
    scanf("%d",&iValue);
    bRet = ChkZero(iValue);
    if(bRet == True)
    {
        printf("There is zero in the number\n");
    }
    else
    {
        printf("There is no zero in the number\n");
    }
    
    return 0;
}