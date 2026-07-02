#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0;
    printf("Enter distance in kilometers: ");
    scanf("%d", &iValue);

    printf("Distance in meters: %d\n", KMtoMeter(iValue));
    return 0;
}