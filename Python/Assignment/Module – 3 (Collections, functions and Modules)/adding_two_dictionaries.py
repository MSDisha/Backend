# Write a Python program to combine two dictionary adding values for common keys.  d1 = {'a': 100, 'b': 200, 'c':300} d2 = {'a': 300, 'b': 200,’d’:400} Sample output: Counter ({'a': 400, 'b': 400,’d’: 400, 'c': 300}).  
d1 = {'a': 100, 'b': 200, 'c':300} 
d2 = {'a': 300, 'b': 200,'c':400}
combine_dict={}
for key,value in d1.items():
    combine_dict[key]=value

for key,value in d2.items():
    if key in combine_dict:
        combine_dict[key] += value  # Add value if key already exists
    else:
        combine_dict[key] = value

print("Combined values: ",combine_dict)