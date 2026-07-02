
def CubeX(No):
    return No * No * No

def main():
    Value1 = int(input("Enter the number: "))

    ret = CubeX(Value1)
    print("Cube is: ", ret)
if __name__== "__main__":
    main()