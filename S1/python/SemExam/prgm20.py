def reverse(full_name):
    reversed_words = full_name[::-1]
    reversed_name = " ".join(reversed_words)
    return reversed_name

full_name = input("Enter full name:").split(" ")
print("Reversed name:",reverse(full_name))

# Enter full name:Jyothish P S
# Reversed name: S P Jyothish