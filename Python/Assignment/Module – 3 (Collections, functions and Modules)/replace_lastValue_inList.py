# Write a Python program to replace last value of tuples in a list.  
def last_value(tuple,new_value):
    mylist = []

    for el in tuple:
        mylist2 = el[:-1]+ (new_value, )
        mylist.append(mylist2)
    return mylist

tuple = ((1,2,3),(4,5,6),(7,8,9))
new_value =50

print(last_value(tuple,new_value))
