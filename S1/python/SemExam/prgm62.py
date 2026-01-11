# Perform element wise trigonometric fns.

import numpy as np
values = list(map(float,input("Enter angles:").split(" ")))
a = np.array(values)
print("Sine values:",np.sin(a))
print("Cosine values:",np.cos(a))
print("Tangent values:",np.tan(a))

# Enter angles:0 45 90
# Sine values: [0.         0.85090352 0.89399666]
# Cosine values: [ 1.          0.52532199 -0.44807362]
# Tangent values: [ 0.          1.61977519 -1.99520041]