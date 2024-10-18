#  Write a Python program to find whether a given number is even or odd,print out an appropriate message to the user.
num = int(input("Enter a number: "));   #input number
if num==0:                              #Condition if number is 0 it will shoe Zero
    print("NUmber is zero")             
elif num%2==0:                          #Condition if number is even it will show even number
    print("Number is even")
else:                                   #Condition if number is odd it will show odd number
    print("Number is Odd")