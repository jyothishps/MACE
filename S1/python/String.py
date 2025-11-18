# Given a string of odd length greater than 7, return a new string mde of the middle three characters of a given string.

def middle_three(s):
    if len(s) <= 7 or len(s) % 2 == 0:
        return "String must be odd length and greater than 7"
    
    mid_index = len(s) // 2 
    return s[mid_index - 1 : mid_index + 2]

text = input("Enter a string of odd length greater than 7: ")
result = middle_three(text)
print("Middle three characters:", result)
