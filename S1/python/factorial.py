fact = 1
number = int(input("Enter a number:"))

if number < 0 :
    print("The number is negative")
else:
    for i in range(1,number+1):
        fact = fact * i
    print("Factorial of",number,"is",fact)