# Find the sum of even valued terms in a fibonacci series.

def sum_even(n):
    a = 0
    b = 1
    sum = 0

    for i in range(n):
        if a % 2 == 0:
            sum += a
        
        t = a
        a = b
        b = t + b
    
    return sum

terms = int(input("Enter no. of terms:"))
result = sum_even(terms)
print("Sum of even terms =",result)