# Write lambda fns
# (a) to find largest of 2 numbers
# (b) check if number is divisible by 5
# (c) remove all strings with length < 5
# (d) increment list of integers by 10% if >1000 else 5%

largest = lambda x,y:x if x>y else y
x=10
y=20
print("Largest:",largest(x,y))

num = 12
divisible = lambda num: num%5==0
print("Divisible by 5:",divisible(num))

lst = input("Enter strings:").split(" ")
new = lambda lst:[x for x in lst if len(x)>=5]
print("Strings with length>=5",new(lst))

numbers = list(map(int, input("Enter integers: ").split(" ")))
lst = lambda numbers: [x + (x * 0.1) if x > 1000 else x + (x * 0.05) for x in numbers]
print("New List:", lst(numbers))

# Largest: 20
# Divisible by 5: False
# Enter strings:achu jyothish pranav
# Strings with length>=5 ['jyothish', 'pranav']
# Enter integers: 1000 1001 999 1002
# New List: [1050.0, 1101.1, 1048.95, 1102.2]