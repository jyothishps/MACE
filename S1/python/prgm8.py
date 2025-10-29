l1 = input("Enter list seperated by commas:").split(',')
longest = max(l1,key=len)
print(longest)