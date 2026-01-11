# Write prgms to (a) print out all alternative colors from color-list 1 not contained in color-list 2. 
#                (b) to remove duplicates from a list
#                (c) to check whethher a list is empty or not

# 1st prgm
clr1 = input("Enter clr1:").split(" ")
clr2 = input("Enter clr2:").split(" ")

clr3 = [x for x in clr1 if x not in clr2]

print("Result:",clr3)

# 2nd prgm
s = input("Enter list:").split(",")
new = set(s)
print("After removing duplicates:",new)

# 3rd prgm
s1 = input("Enter numbers:").split(',')
if s1 == [""]:
    print("List is empty")
else:
    print("not empty")