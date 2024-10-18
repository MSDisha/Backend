#to comment a multiple lines we use """
"""
print("Hello")
print("World")


print("Hello" , end="") #For One line 
print("World")


#in C we have scanf and in c++ we have cin but python we will use input by taking varaible.

n = input("Enter Number : ")
print(n)


n = int(input("Enter number : "))       
print(type(n))  #for type(it will give default type string if we didn't mention any specific type)

a = input("Enter number 1: ");
b = input("Enter number 2 : ");

temp = a;
a = b;
b = temp;

a,b = b,a   # trick for swapping two numbers

print("After swapping a: ", a)
print("After swapping b: ", b)

a = int(input("Enter number 1: "));
b = int(input("Enter number 2 : "));

print("Addtion : ",a+b);
print("subtraction : ",a-b);
print("Multiplication : ",a*b);
print("Division : ",a/b);



#even ODD

n = int(input("Enter Number: "))
if n==0:
    print(n,"is zero")
elif n%2==0:
    print(f"{n} is even")
else:
    print("n is odd")



i=1;
while(i<=10):   #condition 
    print(i)    
    i+=1        #increment


for i in range(1,11,1):  #condtion be like = If we want to print 10 we have to take +1 = 11 
    print(i)



n= int(input("Enter number : "));
i=1
fac = 1
while(i<=n):
    fac = fac*i
    i+=1
print(fac)


n = int(input("Enter number : "));
for i in range(1,n+1):      #n+1 is a condition as we said it before that it will take +1 value in condtion 
    print(i)


for i in range(1,6,1):
    for j in range(1,i+1):
        print("*",end="")

    print()

for i in range(1,6,1):
    print("*"*i)
"""


    
    

