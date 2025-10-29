l1 = list(map(int,input("Enter numbers seperated by spaces: ").split()))
print("New List:",[x for x in l1 if x>100])