# Write a Python function that takes two lists and returns true if they have at least one common member. 

def common_members(list1,list2):
    for i in list1:
        if i in list2:
            return True
    return False

input1 = input("Enter List 1: ")
input2 = input("Enter List 2: ")
#hre we use split to convert from string to list
list1 = input1.split()
list2 = input2.split()
res = common_members(list1,list2)

if res:
    print("At least one common member")
else:
    print("No common members")

