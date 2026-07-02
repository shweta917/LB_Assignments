
def Summation(No):
    Sum = 0

    if No < 0:
        No = -No

    for i in range(1, No + 1):
        Sum = Sum + i

    return Sum

def main():
    Value = int(input(" Enter the number : "))

    ret = Summation(Value)
    print("The summation is : ", ret)


if __name__ == "__main__":
    main()
