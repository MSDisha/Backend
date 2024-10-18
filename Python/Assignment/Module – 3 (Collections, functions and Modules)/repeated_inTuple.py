#  Write a Python program to find the repeated items of a tuple.
my_tuple=(1,2,3,4,5,6,2,7,8,6,7,4,4,4,4)

# Initialize an empty set to store seen items and repeated items
item1 = set()
repeat_item= set()

for item in my_tuple:
     # If item is already in item1, add to repeat_item
    if item in item1:
        repeat_item.add(item)
    else:
        item1.add(item)

print("Reapeated Items: ",repeat_item)
