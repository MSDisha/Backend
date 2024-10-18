#  Write a Python program to find the first appearance of the substring ot' and 'poor' from a given string, if 'not' follows the 'poor', replace the whole 'not'...'poor' substring  with 'good'. Return the resulting string.  
string = input("Enter a string: ")
# Find the index of "not" and "poor"
not_i = string.find("not")
poor_i= string.find("poor")
if not_i != -1 and poor_i != -1 and not_i < poor_i:
    # Replace the substring with "good"
    string = string[:not_i] + "good" + string[poor_i + 3:]

print("Modified string:", string)