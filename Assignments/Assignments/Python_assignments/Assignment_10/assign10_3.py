def Fact(No):
    if No == 0:
        return 1
    
    for i in range(No - 1, 0, -1):
        No = No * i

    return No
    

def main():
    Value = int(input("Enter the number : "))

    ret = Fact(Value)
    print("The factorial is : ", ret)

if __name__ == "__main__":
    main()