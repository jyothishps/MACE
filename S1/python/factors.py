#write a program to generate all the factors of a given number

num = int(input("Enter a number:"))

if num <= 0:
    print("Please enter a valid positive number......")
else:
    print("Factors of",num)
    for i in range(1,num+1):
        if num % i == 0:
            print(i)
