class A:
    _a = int (input("Enter 1st number: ")) #_ is protected and __ is private
    def fun1(self):
        print("This is fun1")

class B:
    _b = int (input("Enter 2nd number: "))
    def fun2(self):
        print("This is fun2")

class C(A,B):
    def merger(self):
        print("Addition:",self._a+self._b)

obj = C()
obj.fun1()
obj.fun2()
obj.merger()