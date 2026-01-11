# Write a program to find the
# (a) factorial of a number
# (b) fibinacci series
# (c) sum of elements in list

num = int(input("Enter number:"))
fact = 1
if num == 0:
    print("Zero")
else:
    for i in range(1,num+1):
        fact = fact * i
    print("Factorial of",num,"is",fact)

# Enter number:5
# Factorial of 5 is 120

n = int(input("Enter limit:"))

if n == 0:
    print('Invald')

else:
    a = 0
    b = 1
    print(a)
    print(b)
    for i in range(n-2):
        c = a+b
        print(c)
        a = b
        b = c

# Enter limit:5
# 0
# 1
# 1
# 2
# 3

my_list = [2,'a',3]
if len(my_list) == 0:
    print("List is empty")

else:
    sum = 0
    for i in my_list:
        if type(i) == int or type(i) == float:
            sum+=i

print("Sum:",sum)

# Sum: 5