# Write a Python program to select an item randomly from a list.  
import random

mylist = [10,20,40,80,90,110,160]

random_list = random.choice(mylist)
print("Random number will be: ",random_list)