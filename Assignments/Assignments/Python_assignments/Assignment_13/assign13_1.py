
from Area_pack import AreaRect


def main():
    len = int(input("Enter the length of rect: "))
    width = int(input("Enter the width of rect: "))

    ret = AreaRect(len, width)
    print("Area of rectangle is: ", ret)

if __name__ == "__main__":
    main()