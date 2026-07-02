
def ReverseDigit(No):

    Rev = 0
    while(No != 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No = No // 10

    return Rev

def main():
    Value = int (input("Enter number : "))

    Ret = ReverseDigit(Value)
    print("Reverse number is : ", Ret)

if __name__ == "__main__":
    main()