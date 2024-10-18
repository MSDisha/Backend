#  Write a Python program to count the occurrences of each word in a given sentence 
string = input("enter string: ")
# Split the sentence into words
words = string.split()
# Created an empty dictionary to store word   
freq = {}
 
for i in words:
    if i in freq:
        freq[i] += 1
    else:
        freq[i] = 1
 
# printing result
print("Count of all character:\n ", freq)