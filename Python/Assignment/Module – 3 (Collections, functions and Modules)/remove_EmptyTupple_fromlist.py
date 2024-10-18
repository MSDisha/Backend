#  Write a Python program to remove an empty tuple(s) from a list of tuples.  
tuples_list = [(1, 2), (), (3, 4), (5, 6), (), (7, 8, 9), ()]
mylist = []
# Loop through each tuple in the list
for t in tuples_list:
    if t != ():
        mylist.append(t)
print("List after removing empty tuples:", mylist)
