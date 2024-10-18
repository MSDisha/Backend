#  Write a Python function to reverses a string if its length is a multiple of 4. 
def rev_str(string):
    #   Reverses a string if its length is a multiple of 4
    if len(string)%4==0:
        return string[::-1]
    else:
        return string


string=input("Enter Stirng: ")
print("Reversed string: ",rev_str(string))
