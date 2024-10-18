#  Write a Python program to get unique values from a list  
my_list = [1,3,5,7,2,3,5,0,1]
list2=[]

for i in my_list:
    if i not in list2:
        list2.append(i)

print("Unique list: ",list2)