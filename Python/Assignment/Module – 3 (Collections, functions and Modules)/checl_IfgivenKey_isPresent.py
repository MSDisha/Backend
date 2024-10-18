# Write a Python script to check if a given key already exists in a dictionary.  
my_dict = {'apple': 5, 'banana': 2, 'cherry': 7}

check = input("Enter a key to check : ")

if check in my_dict:
    print("Key is present in the dictionary")
else:
    print("Key is not present in the dictionary")

