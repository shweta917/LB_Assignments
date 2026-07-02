#include<stdio.h>

int DollarToINR(int iDollars)
{
    int iINR = 0;

    iINR = iDollars * 70;

    return iINR;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the amount in dollars : \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("The amount in INR is : %d\n", iRet);

    return 0;
}