# Write a Python program to count the number of strings where the string length is 2 or more and the first and last character are same from a given list of strings. 
strings = ["abc","def","aba","aca","aaa","dsd"]
# Initialize the count
count=0
for i in strings:
    if len(i)>=2 and i[0]==i[-1]:
        count+=1
print("Counts of strings: ",count)