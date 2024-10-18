d1 = {
    'a': 100,'b': 200,'c': 300
}
d2 = {
    'a': 300,'b': 200,'d': 400
}
join_dict={}
for key,value in d1.items():
    join_dict[key]=value
for key,value in d2.items():
    if key in join_dict:
        join_dict[key]+=value
    else:
        join_dict[key] = value


print("Joined Dictionary: ",join_dict)
