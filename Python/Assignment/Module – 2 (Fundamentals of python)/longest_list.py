#Write a Python function that takes a list of words and returns the length of the longest one.  
def longest_one(words):
    long_length=0
    for i in words:
        if len(i)>long_length:
            long_length=len(i)
    return long_length

list = ["apple","bananas","mango","grapes"]
print("Longest length: ",longest_one(list))