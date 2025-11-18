n = int(input("Enter n:"))

if(n < 0):
    print("Please enter a positive value.....")
else:
    a=0
    b=1
    print("Fibinocci series")
    print(a)
    print(b)
    for i in range(n-2):
        c=a+b
        print(c)
        a=b
        b=c

