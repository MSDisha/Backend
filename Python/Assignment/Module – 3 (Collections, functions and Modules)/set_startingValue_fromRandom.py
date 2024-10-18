#How will you set the starting value in generating random numbers?  
import random
# Set the seed value to 42
random.seed(32)
random_number1 = random.randint(1, 10)
random_number2 = random.random()

print("Random number 1:", random_number1)
print("Random number 2:", random_number2)