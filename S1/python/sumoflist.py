# sum of elements in a list
# check if list is empty
# 

list = input("Enter list of numbers seperated by space: ")

if not list.strip():
    print("List is empty")
else:
    total=0
    numbers = list.split()
    for i in numbers:
        total += int(i)
    print("Sum of elements =",total)
