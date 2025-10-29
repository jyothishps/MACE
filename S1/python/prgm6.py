def unique(elements):
    return [x for x in elements if elements.count(x) == 1]

elements = input("Enter elements seperated by spaces: ").split()
print(unique(elements))