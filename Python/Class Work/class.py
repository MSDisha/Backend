class myclass:
    def myfun(self):        #self is important and if we givem self then we have to makesure to give parenthesis in making class for object
        n=input("enter number: ")
        n1=n[::-1]
        if n==n1:
            print("Palindrome")
        else:
            print("Its is not palindrome")

class Myclass2:
    def myfun1(self):
        list = [3,5,8,2,9]
        list.sort()
        print("Smallest: ",list[0])
        print("Largest: ",list[-1])

class Myclass3:
    def myfun2(self):
        d={}
        n=int(input("Enter a number: "))
        for i in range(1,n+1):
            d[i]=i*i*i

        print(d)

obj1 = myclass()
obj2 = Myclass2()
obj3 = Myclass3()

while True:
    menu = """
        Press 1 for Palindrome or Not
        Press 2 for List 
        Press 3 for Cube
        Press 4 for Visiting
        Press 5 for Exit
    """

    print(menu)
    choice = int(input("Enter your choice: "))

    if choice==1:
        obj1.myfun()
    elif choice==2:
        obj2.myfun1()
    elif choice==3:
        obj3.myfun2()
    elif choice==4:
        print("Thank youu")
    else:
        print("Invalid")
        break
    

