l1 = input("Enter list 1:").split()
l2 = input("Enter list 2:").split()
print(l1)
print(l2)
l1 = [i.lower() for i in l1]
l2 = [i.lower() for i in l2]
if l1 == l2:
    print("SAME")
else:
    print("DIFFERENT")