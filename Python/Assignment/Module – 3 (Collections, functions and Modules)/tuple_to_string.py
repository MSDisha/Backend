#  Write a Python program to convert a tuple to a string.  
def tuples_string(my_tuple):
    string = ""
    for el in my_tuple:
        string += str(el)
    return string

my_tuple = (1, 2, 3, 4, 5)
result = tuples_string(my_tuple)
print(result) 