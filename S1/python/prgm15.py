s = input("Enter string:")
if len(s) >= 3 and s[-3:]=="ing":
    s+="ly"
else:
    s+="ing"
print("New String:",s)