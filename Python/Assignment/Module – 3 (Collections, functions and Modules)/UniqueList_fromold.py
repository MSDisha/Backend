# Write a Python function that takes a list and returns a new list with unique elements of the first list.  
def unique_list(input_list):
    list1=[]
    for i in input_list:
        if i not in list1:
            list1.append(i)
    return list1

my_list = [1, 2, 3, 2, 4, 1, 5]
list1 = unique_list(my_list)
print(list1)