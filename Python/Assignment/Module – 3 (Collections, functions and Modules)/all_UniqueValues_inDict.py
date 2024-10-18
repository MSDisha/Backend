#  Write a Python program to print all unique values in a dictionary.  
my_dict = {
    'a': 100,
    'b': 200,
    'c': 300,
    'd': 200,
    'e': 100,
    'f': 400
}
unique_val= set()

for el in my_dict.values():
    unique_val.add(el)

print("Unique values in the dictionary:", unique_val)
