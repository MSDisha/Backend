#Functin with return type and wiothout parameters

def hello():
    n = int (input("Enter a number : "))
    fac=1
    for i in range(1,n+1):
        fac=fac*i
    return fac

def add():
    n1 = int (input("Enter a number : "))
    n2 = int (input("Enter a number : "))
    return n1+n2

def cube():
    n3 = int (input("Enter a number : "))
    return n3*n3*n3
print(cube())
print(add())
print(hello())
