# Write a Python program to count the number of characters (character frequency) in a string 
string = input("enter string: ")
freq = {}
 
for i in string:
    if i in freq:
        freq[i] += 1
    else:
        freq[i] = 1
 
# printing result
print("Count of all character:\n ", freq)