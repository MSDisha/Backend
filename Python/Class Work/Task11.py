data = [
    {'item': 'item1', 'amount': 400},
    {'item': 'item2', 'amount': 300},
    {'item': 'item1', 'amount': 750}
]

combine_data = {}

for i in data:
    item = i['item']
    amount =i['amount']
    if item in combine_data:
        combine_data[item]+=amount
    else:
        combine_data[item]=amount

print("Combined data: ",combine_data)