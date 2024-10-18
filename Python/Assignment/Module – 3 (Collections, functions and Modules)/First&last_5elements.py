# Write a Python program to generate and print a list of first and last 5 elements where the values are square of numbers between 1 and 30.  

# Generate a list of squares of numbers between 1 and 30
square = [i**2 for i in range(1,31)]

first_five = square[:5]
last_five = square[-5:]

print("First Five : ",first_five)
print("Last Five : ",last_five)