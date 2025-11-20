# Compare two lists entered by user

# Read two lists from user
list1 = input("Enter first list (comma-separated): ")
list2 = input("Enter second list (comma-separated): ")

# Convert to actual lists
list1 = [item.strip() for item in list1.split(",")]
list2 = [item.strip() for item in list2.split(",")]

# Compare lists
if list1 == list2:
    print("The lists are equal.")
else:
    print("The lists are NOT equal.")
