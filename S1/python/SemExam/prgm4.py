# Enter 2 collections of integers. Check
# (a) whether they are of same length
# (b) whether they sums to the same value
# (c) whether any value occur in both

c1 = list(map(int,input("Enter number list1:").split(",")))
c2 = list(map(int,input("Enter number list2:").split(",")))

print("Both have same length:",len(c1) == len(c2))
print("Both have same sum:",sum(c1) == sum(c2))
print("Values occur in both:",[x for x in c1 if x in c2])