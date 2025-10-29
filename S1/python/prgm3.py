clr1 = input("Enter clr list1:").split(',')
clr2 = input("Enter clr list2:").split(',')
print("Difference:",[x for x in clr1 if x not in clr2])

print("\n")

s = map(int,input("Enter numbers:").split(","))
print(set(s))

s1 = input("Enter numbers:").split(',')
if s1 == [""]:
    print("List is empty")
else:
    print("not empty")