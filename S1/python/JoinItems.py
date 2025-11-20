#write a rercursive function to join items in a list using '-'

def join(lst):
    if not lst: 
        return ""
    if len(lst) == 1: 
        return str(lst[0])
    return str(lst[0]) + "-" + join(lst[1:])

items = ["apple", "banana", "cherry", "date"]
result = join(items)
print(result)
