fact = 1
num = int(input("Enter num:"))
if num < 0:
    print("Niggative")
else:
    for x in range(1,num+1):
        fact = fact * x
    print("Factorial:",fact)

print("\n")

n = int(input("Enter num:"))
a=0
b=1
print("Fibinocci:")
print(a)
print(b)
for i in range(n-2):
    c = a+b
    print(c)
    a=b
    b=c

print("\n")

l3 = [2,3,'apple',5]
sum = 0
for i in l3:
    if type(i)==int:
        sum+=i
print("Sum of integers in the list:",sum)