l = [1,1,2,3,4,1.65,2.45,"hello","welcome",True]
l.append(100)
print(l)

l1 = l.copy()
print(l1)

print(l.count(1)) #it counts true as a 1

l.extend([200,300,400])
print(l)

l.insert(2,"Disha")
print(l)

l.pop(2)
print(l)

l.remove(100)
print(l)

l1=[3,56,78,2,4,5,9]
l1.sort()
print(l1)

print(l1[::-1])



