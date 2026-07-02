#include<stdio.h>

double SqFeetToSqMeter(float fArea)
{
    double dSqMeter = 0.0;
    dSqMeter = fArea * 0.092903;
    return dSqMeter;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f", &fValue);

    dRet = SqFeetToSqMeter(fValue);
    printf("Area in square meters is %.4f\n", dRet);

    return 0;
}
