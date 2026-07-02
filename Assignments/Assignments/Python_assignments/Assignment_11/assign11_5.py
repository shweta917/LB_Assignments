
def CheckPalindrome(No):

    Rev = 0
    Temp = No

    while(No != 0):
        Digit = No % 10
        Rev = (Rev * 10) + Digit
        No = No // 10

    if (Rev == Temp):
        return True
    else:
        return False

def main():
    Value = int (input("Enter number : "))

    Ret = CheckPalindrome(Value)
    if Ret:
        print("Number is Palindrome")
    else:
        print("Number is not Palindrome")

if __name__ == "__main__":
    main()