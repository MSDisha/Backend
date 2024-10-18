# Write a Python program to count occurrences of a substring in a string.  
main_string = input("Enter the main string: ")
substring = input("Enter the substring to count: ")

# Initialize count and start position
count = 0
start = 0
while True:
    # Use the find method to get the next occurrence of the substring
    n = main_string.find(substring, start)
    # If find returns -1, the substring is no longer found
    if n == -1:
        break
    count += 1

    # Update the start position for the next search
    start = n + len(substring)
print("The substring occurred", count)
