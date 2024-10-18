# Write a Python function to insert a string in the middle of a string. 
def insert_string_middle(string, insert):
    # Calculate the middle index of the main string
    middle = len(string) // 2
    
    # Insert the second string into the middle of the first string
    result = string[:middle] + insert + string[middle:]
    
    return result
main_str = "HelloWorld"
insert_str = "Beautiful"
print("Resulting string:", insert_string_middle(main_str, insert_str))
