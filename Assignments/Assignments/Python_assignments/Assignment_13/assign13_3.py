



def CheckPerfect(No):

    Sum = 0

    for i in range(1, No/2 +1):
        if (No % i == 0):
            Sum = Sum + i

    if Sum == No:
        return True
    else:
        return False


def main():
    Value = int(input("Enter the number : "))

    Ret = CheckPerfect(Value)
    if Ret:
        print("The number is perfect.")
    else:
        print("The number is not perfect.")

if __name__ == "__main__":
    main()