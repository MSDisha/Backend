# Write a Python script to sort (ascending and descending) a dictionary by value. 
d = {1: 2, 3: 4, 4: 3, 2: 1, 0: 0}
print('Original dictionary : ',d)
sd = sorted(d.items())
print(dict(sd))
sd = dict( sorted(d.items(),reverse=True))
print('Descending order : ',sd)