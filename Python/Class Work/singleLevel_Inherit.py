class myclass:
    def myfun(self):
        n=input("enter number: ")
        n1=n[::-1]
        if n==n1:
            print("Palindrome")
        else:
            print("Its is not palindrome")

class Myclass2(myclass):
    def myfun1(self):
        list = [3,5,8,2,9]
        list.sort()
        print("Smallest: ",list[0])
        print("Largest: ",list[-1])

obj = Myclass2()
obj.myfun()
obj.myfun1()