# Write a function that takes a list and returns a new list of unique elements from list.

def unique(lst):
    return [x for x in lst if lst.count(x)==1]

lst = input("Enter elements sepperated by spaces:").split(" ")
print(unique(lst))

# Enter elements sepperated by spaces:apple orange apple watermelon
# ['orange', 'watermelon']