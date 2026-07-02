
def CheckVowel(Ch):
    if Ch in ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'):
         return True

    return False

def main():
     char1 = input("Enter the char : ")

     Ret = CheckVowel(char1)

     if Ret == True:
         print("It is a vowel")
     else:
         print("It is not a vowel")

if __name__ == "__main__":
    main()