#Write a Python function to check whether a number is perfect or not.  
def perfect_number(n):
    sum = 0
    for x in range(1, n):
        if n % x == 0:
            sum += x
    # Check if the 'sum' of factors is equal to the original number 'n'
    return sum == n

print(perfect_number(3)) 
