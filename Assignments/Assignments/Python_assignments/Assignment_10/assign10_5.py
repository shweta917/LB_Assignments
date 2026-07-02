
def OddNumbers(Value):

    Arr = list()

    for i in range(1, Value + 1):
        if i % 2 != 0:
            Arr.append(i)

    return Arr

def main():
    Value = int(input("Enter a value: "))

    ret = OddNumbers(Value)
    print("Odd numbers from 1 to", Value, "are:", ret)

if __name__ == "__main__":
    main()