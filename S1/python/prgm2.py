s1 = input("Enter string1:")
s2 = input("Enter string2:")
print(s2[0] + s1[1:] + " " + s1[0] + s2[1:])
print("\n")

clrs = input("Enter colours:").split(",")
print(clrs[::2])