# Write a Python program to remove duplicates from a list. 
mylist = [1,2,3,4,5,3,2,6,]
dup_list = list(set(mylist))
print("List without duplicate: ",dup_list)


mylist = [1,2,3,4,5,3,2,6,]
mylist2=[]
for i in mylist:
    if i not in mylist2:
        mylist2.append(i)
print("Lists: ",mylist2)