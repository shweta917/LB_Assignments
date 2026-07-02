

def CheckPrime(No):

    if( No <= 1):
        return False

    for i in range(2, int(No / 2) + 1):
        if (No % i == 0):
            return False
  
    return True

def main():
    Value = int(input("Enter a Value : "))

    ret = CheckPrime(Value)
    if ret == True:
        print("Given Number is Prime")
    else:
        print("Given Number is Not Prime")

if __name__ == "__main__":
    main()