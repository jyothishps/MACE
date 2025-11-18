# Write a program that counts odd and even numbers in a given list.

def odd(num):
    if num % 2 != 0:
        return 1
    else:
        return 0
def even(num):
    if num % 2 == 0:
        return 1
    else:
        return 0

numbers = input("Enter numbers:")
count1 = count2 = 0
for i in numbers:
    num = int(i)
    count1 = count1 + odd(num)
    count2 = count2 + even(num)

print('Odd Count:',count1)
print('Even Count:',count2)