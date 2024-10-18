# How can you pick a random item from a list or tuple?  

import random
my_list = [1, 2, 3, 4, 5]
my_tuple = ('apple', 'banana', 'cherry', 'date')
random_list = random.choice(my_list)
print(f"Random item from list: {random_list}")

random_tuple = random.choice(my_tuple)
print(f"Random item from tuple: {random_tuple}")
