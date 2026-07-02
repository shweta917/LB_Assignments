# User defined function in python 
# User defined function is a function written by the programmer to perform a specific task. The function is written because some task are done 
# repeatedly, hence to reusibility of code, we write a function. A function is a block of code which only runs when it is called. You can pass data, known
# as parameters, into a function. A function can return data as a result.


def MutliplyX(No1, No2):
    Ans = No1 * No2
    return Ans

def main():
    Value1 = int(input("Enter first number: "))
    Value2 = int(input("Enter second number: "))
    Ret = MutliplyX(Value1, Value2)
    print("Multiplication is: ", Ret)

if __name__ == "__main__":
    main()