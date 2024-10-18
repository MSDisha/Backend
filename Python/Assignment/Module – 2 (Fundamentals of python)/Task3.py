# 3) Write a Python program to get the Fibonacci series of given range.
n= int(input("Enter a number: "));  #input numbers
n1=0            #First num will alwasy be 0
n2=1            #Secong num will always be 1
print(n1)
print(n2)
for i in range(3,n+1,1):       #loop starting from 3 till it completes with i<n
    n3=n1+n2                   
    print(n3)
    n1=n2                   #Swapping
    n2=n3