# print() - func will display the value/string passed as argument to the console. It doesnot return anything.
# return - this will return the value to the calling function. If we do not specify any return value explicitly, default return value is None.
#
#



def add1(a, b):
    return a + b

def add2(a, b):
    print(a + b)

def main():
    result1 = add1(2, 3)
    print("Result from add1:", result1)

    result2 = add2(2, 3)
    print("Result from add2:", result2)  # This will print None since add2 does not return anything

if __name__ == "__main__":
    main()