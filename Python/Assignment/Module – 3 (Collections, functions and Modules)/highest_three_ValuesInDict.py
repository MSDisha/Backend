#  Write a Python program to find the highest 3 values in a dictionary 
my_dict = {
    'apple': 100,
    'banana': 200,
    'cherry': 300,
    'date': 400,
    'elderberry': 250
}

# Find the highest three values
highest_values = sorted(my_dict.values(), reverse=True)[:3]
print("The highest three values in the dictionary are:", highest_values)

