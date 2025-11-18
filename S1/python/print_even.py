def even(num):
    if num%2==0:
        return num

numbers = input("Enter numbers seperated by spaces: ").split()
for i in numbers:
    num = int(i)
    if num==237:
        break
    result = even(num)
    
    if result:
        print(result)

