# Write a program that retrives all lines from a file having words starting with 's' and ending with 'e'

filename = input("Enter filename: ")

try:
    with open(filename, "r") as file:
        lines = file.readlines()

    print("Lines containing words starting with 's' and ending with 'e':\n")
    
    for line in lines:
        words = line.strip().split()
        if any(word.lower().startswith('s') and word.lower().endswith('e') for word in words):
            print(line.strip())

except FileNotFoundError:
    print(f"File '{filename}' not found.")
