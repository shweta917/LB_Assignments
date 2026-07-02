

def BinaryEq(No):

    temp = No
    Arr = list()

    while(No !=0):
        Digit = No % 2

        Arr.append(Digit)
        No = No // 2

    Arr.reverse()
  
    return Arr

def main():
    Value = int(input("Enter the  Number: "))

    Ret = BinaryEq(Value)
    print("Binary equivalent is: " )
    for i in Ret:
        print(i, end="")

    print("\n")

if __name__ == "__main__":
    main()