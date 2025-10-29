def occurence(lst,key):
    return lst.count(key)

lst = input("Enter list:").split()
key = input("Enter key to search:")
count = occurence(lst,key)

print(key,"occurs",count,"time(s) in the list")