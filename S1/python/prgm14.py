# l1 = list(map(int,input("Enter numbers:").split()))
# print("Positive numbers: ",[x for x in l1 if x>0])

# l1 = list(map(int,input("Enter numbers:").split()))
# print("Squares: ",[x**2 for x in l1])

# l1 = list(map(int,input("Enter numbers:").split()))
# print("Odd numbers:",[x for x in l1 if x%2!=0])

c = int(input("Enter current year:"))
f = int(input("Enter future year:"))
print("Leap years: ",[y for y in range(c,f+1) if (y % 4 == 0) and ((y % 100 != 0) or (y % 400 == 0))
])