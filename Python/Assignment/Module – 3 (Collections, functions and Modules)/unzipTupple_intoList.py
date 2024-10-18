#  Write a Python program to unzip a list of tuples into individual lists.  
my_list = [(1, 2), (3, 4), (5, 6)]

# Unzip the list of tuples using the zip function
unzipped_lists = list(zip(*my_list))

print(unzipped_lists)