# Display no. of occurences of a given item

def occurences(lst,key):
    return lst.count(key)

lst = input("Enter list of items:").split(" ")
key = input("Enter key:")
print(key,"occurs",occurences(lst,key),"time(s).")

# Enter list of items:1 2 3 4 5 6 5 3 2 4 
# Enter key:2
# 2 occurs 2 time(s).