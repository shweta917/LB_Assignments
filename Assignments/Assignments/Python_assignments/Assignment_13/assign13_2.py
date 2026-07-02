

from Area_pack import AreaCircle

def main():
    Radius = int(input("Enter the radius of circle: "))

    ret = AreaCircle(Radius)
    print("Area of circle is: ", ret)

if __name__ == "__main__":
    main()