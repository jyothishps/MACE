# concatenate integers

def concatenate(digits):
    number = "".join(digits)
    return number

digits = input("Enter digits:").split(" ")
print(concatenate(digits))

# Enter digits:1 2 3 4
# 1234