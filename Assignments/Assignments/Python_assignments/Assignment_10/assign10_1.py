
def Tables(No):

    Arr = list()

    if No < 0:
        No = -No

    for i in range(1,11):
        Arr.append(No * i)

    return Arr

def main():
    Value = int(input("Enter the number"))

    ret = Tables(Value)
    print("The table is : ", ret)

if __name__ == "__main__":
    main()
