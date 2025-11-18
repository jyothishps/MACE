def concatenate(digits):
    return ''.join(digits)

digits = input('Enter single digit numbers seperated by commas: ').split()
print('Concatenated:',concatenate(digits))