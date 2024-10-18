# Write a Python program to check multiple keys exists in a dictionary  
my_dict = {'a': 1, 'b': 2, 'c': 3}
keys_to_check = input("Enter Keys: ")

for key in my_dict:
    if key in keys_to_check:
        print("All keys atre exist")
    else:
        print("Not all keys are exist")