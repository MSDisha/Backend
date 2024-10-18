# How Do You Traverse Through A Dictionary Object In Python?  
example_dict = {'apple': 5, 'banana': 2, 'cherry': 7}

for key in example_dict:
    print("Keys: ", key)

for key in example_dict.keys():
    print("Keys: ",key)

for value in example_dict.values():
    print("Values: ",value)

for key,value in example_dict.items():
    print("Key: ",key, "value: ",value)