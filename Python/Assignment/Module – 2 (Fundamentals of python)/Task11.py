# Write a python program to sum of the first n positive integers.  
n = int(input("Enter any positive integer: "))
sum=0
for i in range(1,n+1):
    sum+=i
print("Sum of first",n,"positive integer is: ",sum)
