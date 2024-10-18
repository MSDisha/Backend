# Write a Python script to concatenate following dictionaries to create a new one.  
dict1 = {1:"a",2:"b",3:"c"}
dict2 = {4:"d",5:"e",6:"f"}
dict3 = {7:"g",8:"h",9:"i"}

dict1.update(dict2)
dict1.update(dict3)

print("New Dictionary: ",dict1)