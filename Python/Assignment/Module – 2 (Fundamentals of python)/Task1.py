# 1) Write a Python program to check if a number is positive, negative or zero.  
num = int(input("Enter a number: "))    #input number
print(num)
if num > 0:                             #condition if number is greater than 0 it will shoe positive number
    print("Number is positive.")
elif num < 0:                           #condition if number is less than 0 it will shoe negative number
    print("Number is negative.")
else:                                   
    print("Number is zero")