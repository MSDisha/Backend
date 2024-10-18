# 5)What is the purpose continue statement in python? 
# Ans: The continue statement in Python is used to skip the rest of the code inside the current loop iteration and move directly to the next iteration. It is typically used in loops (for or while) when you want to skip certain conditions but continue looping through the rest of the elements.
for num in range(1, 7):
    if num == 3:
        continue  # Skip the rest of the loop when num is 3
    print(num)
