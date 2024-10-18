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


def pattern1():
    for i in range(1,6):
        print("*"*i)

def pattern2():
    for i in range(1,6):
        print(" "*(6-i),"*"*i)

def pattern3():
    for i in range(1,6):
        print(" "*(6-i)," *"*i)

def pattern4():
    for i in range(1,6):
        print(" "*(6-i)," \U0001F607"*i)