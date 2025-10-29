c1 = list(map(int,input("Enter numbers:").split(',')))
c2 = list(map(int,input("Enter numbers:").split(',')))

print("Length is same:",len(c1) == len(c2))
print("Sum is same:",sum(c1) == sum(c2))
print("Value occur in both:",[x for x in c1 if x in c2])