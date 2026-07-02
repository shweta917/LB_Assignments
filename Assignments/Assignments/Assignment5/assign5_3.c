#include<stdio.h>

void Display(int iNo) 
{
    for (int i = -iNo; i <= iNo; i++) {
        printf("%d\t", i);
    }
    printf("\n");
}

int main() 
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}