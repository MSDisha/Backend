class A:
    def Hello(self):
        print("This is Parent class")
    
class B(A):     #here we have generate relation between parent class and its child class
    def Hello2(self):
        print("This is child class")

obj = B()
obj.Hello()
obj.Hello2()