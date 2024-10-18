# How Do You Check The Presence Of A Key In A Dictionary?  
example_dict = {'apple': 5, 'banana': 2, 'cherry': 7}

check_key = input("Enter key to check if it present or not: ")

if check_key in example_dict:
    print("Key is present")
else:
    print("key is not present")