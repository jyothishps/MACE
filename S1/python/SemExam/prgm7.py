# Compare list entered by user

lst1 = input("Enter list 1:").split(" ")
lst2 = input("Enter list 2:").split(" ")
print(lst1,"\n",lst2)

lst1 = [x.lower() for x in lst1]
lst2 = [x.lower() for x in lst2]

if lst1 == lst2:
    print("Both lists are same")
else:
    print("Both are different")

# Enter list 1:apple orange banana
# Enter list 2:apple banana
# ['apple', 'orange', 'banana'] 
# ['apple', 'banana']
# Both are different