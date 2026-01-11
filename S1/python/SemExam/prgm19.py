# Evaluate using consitional statements:
# (a) Check if givven no. is even/odd
# (b) Checkif an item is available in a list and return available or Not available

num = int(input("Enter a number:"))
print("Odd") if num%2!=0 else print("Even")

lst = input("Enter items:").split(" ")
item = input("Enter item to search:")
print("Available") if item in lst else print("Not Available")

# Enter a number:12
# Even
# Enter items:apple orange banana
# Enter item to search:banana
# Available