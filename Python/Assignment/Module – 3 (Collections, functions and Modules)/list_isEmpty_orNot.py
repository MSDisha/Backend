#  Write a Python program to check a list is empty or not.  
list = input ("Enter list or leave empty: ")
mylist = list.split()
if not mylist:
    print("List is empty")
else:
    print("List is not empty")