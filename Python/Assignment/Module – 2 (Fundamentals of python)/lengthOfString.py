#  Write a Python program to calculate the length of a string.  
str = input("Enter a string: ")
# Initialize length to 0
length = 0
# Loop through each character in the string and increment length
for char in str:
    length += 1
print("The length of the string is:", length)
