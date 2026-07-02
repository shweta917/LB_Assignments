#include<stdio.h>

double FhtoCS(float fTemp)
{

    double dCelsius = 0.0;
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCS(fValue);
    printf("Temperature in Celsius is %.4f\n", dRet);
    return 0;
}