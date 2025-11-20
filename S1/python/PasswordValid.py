# Write a program to check the validity of password input by users
# Atleast 1 letter b/w [a-z] and 1 letter b/w [A-Z].
# Atleast 1 number b/w [0-9]
# Atleast 1 character from [$#@]
# Minimum length 6 characters
# Maximum length 16 characters

def is_valid_password(password):
    if len(password) < 6 or len(password) > 16:
        return False

    has_lower = False
    has_upper = False
    has_digit = False
    has_special = False

    for c in password:
        if c.islower():
            has_lower = True
        elif c.isupper():
            has_upper = True
        elif c.isdigit():
            has_digit = True
        elif c in "$#@":
            has_special = True

    return has_lower and has_upper and has_digit and has_special


pwd = input("Enter a password: ")
if is_valid_password(pwd):
    print("Valid password")
else:
    print("Invalid password")
