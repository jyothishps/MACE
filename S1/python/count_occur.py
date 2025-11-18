def occurence(list,item):
    return list.count(item)

elements = input('Enter list elements seperated by spaces: ').split()
item_to_search = input('Enter item to search: ')
count = occurence(elements,item_to_search)

print(item_to_search,'occurs',count,'time(s) in the list.')