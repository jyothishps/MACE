# Count the no. of strings where string length is 2 or more and the first and last characters are same

def count_strings(lst):
    count = 0
    for w in lst:
        if len(w)>=2 and w[0]==w[-1]:
            count+=1
    return count
lst = input("Enter strings:").split(" ")
print("No. of strings where string length is 2 or more and first and last characters are same:",count_strings(lst))

# Enter strings:level apple malayalam
# No. of strings where string length is 2 or more and first and last characters are same: 2

