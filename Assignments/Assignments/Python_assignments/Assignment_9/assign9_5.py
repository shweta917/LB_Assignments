
def Divisible(No):

    if (No % 5 == 0) and (No % 3 == 0):
        return True
    else:
        return False

def main():
    Value1 = int(input("Enter the number: "))

    ret = Divisible(Value1)
    if ret:
        print("It is divisible by 5 and 3")
    else:
        print("It is not divisible by 5 and 3")

if __name__ == "__main__":
    main()
