#include<stdio.h>


int KMtoMeter(int iNo)
{
    int iKM = 0;
    iKM = iNo * 1000;
    return iKM;
  
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance in KM : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);
    printf("Distance in meters is : %d\n", iRet);

    return 0;
}

