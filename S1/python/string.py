# Write a program that count the number of strings where string length is 2 or more and the first and last characters are same.

def countStrings(strings):
    count = 0
    for s in strings:
        if len(s)>=2 and s[0]==s[-1]:
            count+=1
    return count

input_strings = input("Enter strings seperated by spaces: ").split()
result_count = countStrings(input_strings)

print('Count of strings where string length is 2 or more and the first and last characters are same:',result_count)
    