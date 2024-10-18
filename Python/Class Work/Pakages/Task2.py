from Task1 import *

while True:
    menu = """
        press 1 for prime number
        press 2 for pattern 1
        press 3 for pattern 2
        press 4 for pattern 3
        press 5 for pattern 4
        press 6 for exit
        """
    print(menu)

    choice = int(input("Enter your choice: "))

    if choice==1:
        prime()
    
    elif choice==2:
        pattern1()
    elif choice==3:
        pattern2()
    elif choice==4:
        pattern3()
    elif choice==5:
        pattern4()
    elif choice==6:
        break
    else:
        print("Invalid choice")
        break