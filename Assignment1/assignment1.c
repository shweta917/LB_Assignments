#inclute <stdio.h>

void printEven(int iNo)
{
    if(iNo <= 0)
    {
       return;
    }

    for(int i = 1; i <= iNo; i++)
    {
        if(i % 2 == 0)
        {
            print(i)
        }
    }
}

int main()
{
    int iValue = 0

    print("Enter a number: ")
    iValue = input()

    printEven(iValue)

    return 0
}