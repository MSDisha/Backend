#  How will you compare two lists? 
list1 = [1, 2, 3]
list2 = [1, 2, 3]
list3 = [3, 2, 1]

# Compare lists
print(list1 == list2)  # Output: True (order are the same)
print(list1 == list3)  # Output: False (order is different)


list1 = [1, 2, 3]
list2 = [3, 2, 1]

# Sort and compare
print(sorted(list1) == sorted(list2))  # Output: True

list1 = [1, 2, 2, 3]
list2 = [3, 1, 2]

# Convert to sets and compare
print(set(list1) == set(list2))  # Output: True
