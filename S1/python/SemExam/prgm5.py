# (a) write a program to check if a given key already exists in a dictionary
# (b) program to sort a dictionary in ascending and descending order
# (c) program to crerate a inverted dictionary
# (d) copy one dict to another

# (a)
dic = {1:10,2:20,3:30,4:40,5:50}
print(dic)
k = int(input("Enter key:"))
print("Key already exists:",k in dic)
# OUTPUT
# {1: 10, 2: 20, 3: 30, 4: 40, 5: 50}
# Enter key:10
# Key already exists: False

# (b)
dic = {1:50,2:40,3:30,4:20,5:10}
print(dic)
print("Ascending:",dict(sorted(dic.items())))
print("Descending:",dict(sorted(dic.items(),reverse="True")))
# OUTPUT
# {1: 50, 2: 40, 3: 30, 4: 20, 5: 10}
# Ascending: {1: 50, 2: 40, 3: 30, 4: 20, 5: 10}
# Descending: {5: 10, 4: 20, 3: 30, 2: 40, 1: 50}

# (c)
dic = {1:50,2:40,3:30,4:20,5:10}
print(dic)
print({v:k for k,v in dic.items()})
# OUTPUT
# {1: 50, 2: 40, 3: 30, 4: 20, 5: 10}
# {50: 1, 40: 2, 30: 3, 20: 4, 10: 5}

# (d)
d1 = {1:2,2:3,3:4,4:5}
d2 = {5:6,6:7}
d1.update(d2)
print("New:",d1)
# OUTPUT
# New: {1: 2, 2: 3, 3: 4, 4: 5, 5: 6, 6: 7}