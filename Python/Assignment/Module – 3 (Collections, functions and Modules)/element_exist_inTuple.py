# Write a Python program to check whether an element exists within a tuple
mytuple = (10,20,30,40,50)

tuple2 = int(input("Enter a number which will exist un the tuple: "))

if tuple2 in mytuple:
    print("This element is exist in the given tuple")
else:
    print("It is not present")