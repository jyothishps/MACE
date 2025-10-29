def reverse(name):
    words = name.split()
    reversed_words = words[::-1]
    reversed_name = " ".join(reversed_words)
    return reversed_name

name = input("Enter your name:")
print("Reversed order:",reverse(name))