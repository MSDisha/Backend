#Write a Python program to find the second smallest number in a list.  

my_list = [10,60,5,8,30,90,6,96]

list1 = list(set(my_list))
list1.sort()
print(list1)
sec_smallest= list1[1]

print("Second Smallest among the given list:",sec_smallest)