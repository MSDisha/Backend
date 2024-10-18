#function:
#it is a block of code that we can use again and again;
#"def" keyword will be use for definition idf function
#there are two types of function : 1)built in 2)User defined function.
#Func without parameters
"""
def myfun():
    print("Hello")
    print("World")
myfun()


def Hello():
    n=int(input("Enter number: "))
    fac=1
    for i in range(1,n+1):
        fac=fac*i
    print(fac)
Hello()
"""
def prime():
    p = int(input("Enter number: "))
    c=0
    for i in range(1,p+1):
        if p%i==0:
            c+=1
    if(c==2):
        print("Number is prime")
    else:
        print("Numbers is not prime")
prime()

def prime(p):       #
    c=0
    for i in range(1,p+1):
        if p%i==0:
            c+=1
    if(c==2):
        print("Number is prime")
    else:
        print("Numbers is not prime")

p = int(input("Enter number: "))
prime(p)

def pattern1():
    for i in range(1,6):
        print("*"*i)

def pattern2():
    for i in range(1,6):
        print(" "*(6-i),"*"*i)

def pattern2():
    for i in range(1,6):
        print(" "*(6-i)," *"*i)