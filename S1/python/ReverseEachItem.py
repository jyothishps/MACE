# Write a function which reverses each item in a list and return the new list.

def reverse_items(list):
    return [item[::-1] for item in list]

list = ["apple","orange","grapes"]
reversed_list = reverse_items(list)

print("Original List:",list)
print("Reversed List:",reversed_list)

