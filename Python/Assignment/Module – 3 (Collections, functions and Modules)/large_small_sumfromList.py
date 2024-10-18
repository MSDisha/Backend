# Write a Python function to get the largest number, smallest num and sum of all from a list.  
def list_aggregate(numbers):
    largest = max(numbers)
    smallest = min(numbers)
    total_sum = sum(numbers)

    return largest, smallest, total_sum


number_list = [10,50,20,78,45]
largest , smallest, total_sum= list_aggregate(number_list)

print("largest: ",largest)
print("Smallest: ",smallest)
print("Total: ",total_sum)