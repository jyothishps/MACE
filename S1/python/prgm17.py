str = input("Enter string input:").strip()
if len(str) > 2:
    print(str[:2] + str[-2:])
elif len(str) < 2:
    print("")
else:
    print(str)