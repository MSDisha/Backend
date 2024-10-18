# 6)Write python program that swap two number with temp variable and without temp variable.
#Using Third varible
a = int (input("Enter First number: ")) #input forst number
b = int (input("Enter Second number: "))   #input second number
temp=a      #taking third variable to store values
a=b
b=temp
print("After swapping a:",a)    #swapping
print("After swapping b:",b)    #swapping

#Without using third variable
x = int (input("Enter First number: ")) #input forst number
y = int (input("Enter Second number: "))   #input second number
x,y = y,x
print("After swapping a:",x)    #swapping
print("After swapping b:",y)    #swapping