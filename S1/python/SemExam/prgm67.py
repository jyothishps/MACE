# To generate 1000 random samples from a normal distribution with ean 10 and SD 3, then plot a histogramof these values.

import numpy as np
import matplotlib.pyplot as plt

s=np.random.normal(loc=10,scale=3,size=1000)
plt.hist(s,bins=30,edgecolor="black")
plt.title("Histogram of 1000 samples from N (10,3)")
plt.xlabel("Value")
plt.ylabel("Frequency")
plt.show()