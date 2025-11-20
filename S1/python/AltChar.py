# Display alternate characters from a line of text using recursion

def alternate_chars(text, index=0):
    if index >= len(text):  # base case: end of string
        return
    print(text[index], end='')  # print current character
    alternate_chars(text, index + 2)  # skip next character


# Read a line of text from user
line = input("Enter a line of text: ")

print("Alternate characters: ", end='')
alternate_chars(line)
print()  # for newline
