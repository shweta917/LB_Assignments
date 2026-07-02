#include<stdio.h>


float FhtoCs(float fTemp)
{
    float fCelcius = 0.0;
    fCelcius = (fTemp - 32) * 5 / 9;
    return fCelcius;
}

int main()
{
    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter the temp in Fahrenheit : \n");
    scanf("%f", &fValue);

    fRet = FhtoCs(fValue);
    printf("Temperature in Celsius is : %.4f\n", fRet);

    return 0;
}
