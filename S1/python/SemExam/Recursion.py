def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n - 1)

num = int(input("Enter a number: "))
print("Factorial:", factorial(num))

def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)

n = int(input("Enter n: "))
print("Fibonacci number:", fibonacci(n))

def sum_list(lst):
    if len(lst) == 0:
        return 0
    else:
        return lst[0] + sum_list(lst[1:])

lst = list(map(int, input("Enter integers: ").split()))
print("Sum of list:", sum_list(lst))

def sum_n(n):
    if n == 0:
        return 0
    else:
        return n + sum_n(n - 1)

n = int(input("Enter N: "))
print("Sum of first N whole numbers:", sum_n(n))

def reverse_string(s):
    if s == "":
        return s
    else:
        return reverse_string(s[1:]) + s[0]

text = input("Enter a string: ")
print("Reversed string:", reverse_string(text))

# Enter a number: 5
# Factorial: 120
# Enter n: 5
# Fibonacci number: 5
# Enter integers: 1 2 3 4 5 6
# Sum of list: 21
# Enter N: 5
# Sum of first N whole numbers: 15
# Enter a string: hello
# Reversed string: olleh