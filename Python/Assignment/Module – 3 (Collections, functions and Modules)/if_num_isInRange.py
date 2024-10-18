# Write a Python function to check whether a number is in a given range 

def check_range(num,start,end):
    return start<=num<=end

number = int(input("Enter Number: ")) 
start_num = int(input("Enter Starting Number: ")) 
ending_num = int(input("Enter Ending Number: ")) 

if check_range(number,start_num,ending_num):
    print(number ,"is within the range of",start_num,"to",ending_num)
else:
    print(number ,"is not within the range of",start_num,"to",ending_num)
