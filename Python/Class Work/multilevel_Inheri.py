d={}

class A:
    def register(self):
        name = input("Enter Your Name: ")
        roll_no = int(input("Enter your Roll no: "))
        d["name"] = name
        d["roll_no"]=roll_no
        print("Register Succesfyll!!")

class B(A):
    maths = 80
    english = 75
    science = 68

    def authenticate(self):
        name = input("Enter Your Name: ")
        roll_no = int(input("Enter your Roll no: "))

        self.name = name
        self.roll_no = roll_no

        if d["name"]==self.name and d["roll_no"]==self.roll_no:
            print("Marks are : ")
            print("Maths: ",self.maths)
            print("English: ",self.english)
            print("Science: ",self.science)
        
        else:
            print("Invalid Credentials!!!")

class C(B):
    def show(self):
        if d["name"]==self.name and d["roll_no"]==self.roll_no:
            total = self.maths+self.english+self.science        #to access global variables
            print("Total: ",total)
            print("Percentage: ",total/3)

obj=C()

menu = """
    press 1 for register
    press 2 exit
"""
print(menu)
choice = int(input("Enter Your Choice: "))

if choice == 1:
    obj.register()

    menu1 = """
        press 1 for authenticate
        press 2 exit
    """
    print(menu1)
    choice1 = int(input("Enter Your Choice: "))
    if choice1 == 1:
        obj.authenticate()
        obj.show()

else:
    print("Thank you")
