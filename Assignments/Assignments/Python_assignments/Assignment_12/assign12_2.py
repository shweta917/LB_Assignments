

def Factors(No):

    Arr = list()

    for i in range (1, (int(No/2)+1)):
        if (No % i == 0):
            Arr.append(i)
    
    Arr.append(No)
    return Arr

def main():

    Value = int(input("Enter number: "))
    Ret = Factors(Value)
    print("Factors are: ", Ret)


if __name__ == "__main__":
    main()
