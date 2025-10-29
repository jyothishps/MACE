s = input("Enter a string:")
ch = s[0]
print("New String:",s[0]+s[1:].replace(ch,'$'))

s2 = input("Enter a string:")
print("New String:",s2[-1] + s2[1:-1] + s[0])