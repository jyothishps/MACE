# Print armstrong number in the range (100,500)

print("Armstrong numbers between 100 and 500:")

for num in range(100, 501):
    digits = str(num)
    total = 0

    for d in digits:
        total += int(d) ** 3   

    if total == num:
        print(num)
