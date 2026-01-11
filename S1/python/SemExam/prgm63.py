import numpy as np
values = list(map(float,input("Enter numbers:").split(" ")))
a = np.array(values)
odd = a [a % 2 != 0]
print("Odd numbers:",odd)

# Enter numbers:1 2 3 4 5 6 7
# Odd numbers: [1. 3. 5. 7.]