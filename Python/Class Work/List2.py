"""
l = []
ev=[]
od=[]
for i in range(1,31):
    l.append(i)
    if i%2==0:
        ev.append(i)
    else:
        od.append(i)
print(l)
print(ev)
print(od)


n= int(input("Enter length of list: "))
l=[]
for i in range(1,n+1):
    n1 = int(input("Enter elements: "))
    l.append(n1)5
print(l)
"""
n= int(input("Enter length of list: "))
l=[]
for i in range(1,n+1):
    n1 = int(input("Enter elements: "))
    l.append(n1)   #it will increment the value by append method to show a list by for loop
print(l)
for i in range(0,len(l)):
    for j in range(i+1,len(l)):
        if l[i]>l[j]:
            temp=l[i]
            l[i]=l[j]
            l[j]=temp
l2=[]
for i in range(0,len(l)):
    print(l[i])
    l2.append(l[i])
print(l2)

print("Smallest : ",l2[0])
print("Largest : ",l2[-1])
print("Second Last : ",l2[-2])