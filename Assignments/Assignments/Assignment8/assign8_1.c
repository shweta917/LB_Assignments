#include<stdio.h>

double CircleArea(float iRadius)
{
    double dArea = 0.0;
    dArea = 3.14 * iRadius * iRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double iRet = 0.0;

    printf("Enter the radius of the circle: ");
    scanf("%f", &fValue);

    iRet = CircleArea(fValue);
    printf("Area of the circle is %.2f\n", iRet);
    return 0;
}