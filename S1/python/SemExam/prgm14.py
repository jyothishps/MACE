# # List Comprehension
# (a) Generate positive nos. list from a given list
# (b) a list of square of numbers from a given list
# (c) a list by removing even numbers
# (d) Display leap year from current year to future year

lst = list(map(int,input("Enter number list:").split(" ")))
print("Given List:",lst)

pos = [x for x in lst if x > 0]
print("List of positive numbers:",pos)

sq = [x*x for x in lst]
print("List of squares:",sq)

odd = [x for x in lst if x % 2!=0]
print("List after removing even nos:",odd)

current = int(input("Enter current year:"))
future = int(input("Enter future year:"))
leap = [x for x in range(current,future+1) if (x%4==0) and (x%100!=0) or (x%400==0)]
print("Leap Years:",leap)

# Enter number list:-1 2 0 34 2 5 -7
# Given List: [-1, 2, 0, 34, 2, 5, -7]
# List of positive numbers: [2, 34, 2, 5]
# List of squares: [1, 4, 0, 1156, 4, 25, 49]
# List after removing even nos: [-1, 5, -7]
# Enter current year:2026
# Enter future year:2050
# Leap Years: [2028, 2032, 2036, 2040, 2044, 2048]