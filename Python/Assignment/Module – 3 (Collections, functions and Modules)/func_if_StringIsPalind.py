# Write a Python function that checks whether a passed string is palindrome or not 
def is_palindrome(s):
    return s == s[::-1]  # Check if string is equal to its reverse

word = input("Enter String: ")
if is_palindrome(word):
    print(f"{word} is a palindrome.")
else:
    print(f"{word} is not a palindrome.")
