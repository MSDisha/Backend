# How will you create a dictionary using tuples in python?  
# Using dict() function:
tuple_list = [(1,"Apple"),(2,"Banana"),(3,"Strawberry"),(4,"Mango")]

dictionary = dict(tuple_list)
print("Dictionary: ",dictionary)

# Using a loop:
tuple_list = [(1,"Apple"),(2,"Banana"),(3,"Strawberry"),(4,"Mango")]
dictionary={}

for key,value in tuple_list:
    dictionary[key] = value

print(dictionary)