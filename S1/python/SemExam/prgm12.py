# Print factors of a number

num = int(input("Enter a number:"))

if num <= 0:
    print("Please enter a valid number")

else:
    print("Factors of",num)
    for i in range(1,num+1):
        if(num % i == 0):
            print(i)

# Enter a number:25
# Factors of 25
# 1
# 5
# 25