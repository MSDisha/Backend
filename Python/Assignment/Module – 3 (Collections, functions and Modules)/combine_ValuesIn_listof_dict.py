# Write a Python program to combine values in python list of dictionaries. Sample data: [{'item': 'item1', 'amount': 400}, {'item': 'item2', 'amount':  300},  {'item': 'item1', 'amount': 750}]  
# Expected Output: Counter ({'item1': 1150, 'item2': 300}) 
data = [
    {'item': 'item1', 'amount': 400},
    {'item': 'item2', 'amount': 300},
    {'item': 'item1', 'amount': 750}
]

combine_data = {}

for el in data:
    item = el['item']
    amount = el['amount']

    if item in combine_data:
        combine_data[item]+=amount
    else:
        combine_data[item]=amount

print("Combined data: ",combine_data)