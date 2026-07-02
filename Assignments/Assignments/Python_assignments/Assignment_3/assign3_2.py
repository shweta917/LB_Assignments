# Function with parameters - A func which is called where parametres are passed to it , it will peform some actions on those parameters annd may/ or may not return something.
# funtion with parameters are of types - postitional parameters, keyword parameters, default parameters, variable length parameters.
#
# Function wihtout parameters - A function which is called without any parameters, it will perform some actions and may/ or may not return something.
#


# func with paramerter
def AddtitionX(No1, No2):
    Ans = No1 + No2
    return Ans

# function without parameter
def Greet():
    print("Hello, World!")

def main():
    Value1 = int(input("Enter first number: "))
    Value2 = int(input("Enter second number: "))
    Ret = AddtitionX(Value1, Value2)
    print("Addition is: ", Ret)

    Greet()

if __name__ == "__main__":
    main()
    

