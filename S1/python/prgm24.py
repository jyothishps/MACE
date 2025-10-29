def odd_indices(x):
    return x[::2]
string = input("Enter a string:")
result = odd_indices(string)
print("After removing:",result)