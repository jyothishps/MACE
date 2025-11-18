# Check whether a given positive integer is power of 2. Raise exception for negative input.

def is_power_of_2(n):
    if n < 0:
        raise ValueError("Negative numbers are not allowed!")

    if n == 0:
        return False

    while n % 2 == 0:
        n = n // 2

    return n == 1


try:
    num = int(input("Enter a number: "))
    if is_power_of_2(num):
        print(num, "is a power of 2")
    else:
        print(num, "is NOT a power of 2")
except ValueError as e:
    print("Error:", e)
