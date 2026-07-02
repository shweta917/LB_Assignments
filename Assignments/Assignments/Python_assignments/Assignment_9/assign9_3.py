

def Square(No):
    return No * No

def main():
    Value1 = int(input("Enter the number: "))

    ret = Square(Value1)
    print("Square is: ", ret)

if __name__ == "__main__":
    main()