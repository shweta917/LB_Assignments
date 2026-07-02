from sys import getsizeof

def main():
    a = 10

    print(type(a))
    print(id(a))
    print(getsizeof(a))

if __name__ =="__main__":
    main()