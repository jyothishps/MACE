words = input("Enter list:").split()
max_len = len(max(words,key=len))
print(max_len)
if len(words) > 1:
    print("BINGO")
