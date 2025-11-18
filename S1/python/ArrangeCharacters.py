# Arrange characters in a string such that lowercase letters must come first.

def lowercase(s):
    lower = ""
    others = ""
    
    for char in s:
        if char.islower():  # Check if character is lowercase
            lower += char
        else:
            others += char
    
    return lower + others

text = input("Enter a string: ")
result = lowercase(text)
print("Reordered string:", result)
