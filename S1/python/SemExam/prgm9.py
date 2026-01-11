# Accept a list of numbers from user. Create a new list with number > 100

lst = list(map(int,input("Enter numbers:").split()))
newList = [x for x in lst if x > 100]
print(newList)

# Enter numbers:98 99 100 101 102 103
# [101, 102, 103]