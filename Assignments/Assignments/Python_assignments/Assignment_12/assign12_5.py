

def Digit(No):

    for i in range (No, 0, -1):
        print(i, end=" ")

    print()

def main():
    Value1 = int(input("Enter number: "))
    
    Digit(Value1)

if __name__ == "__main__":
    main()

    