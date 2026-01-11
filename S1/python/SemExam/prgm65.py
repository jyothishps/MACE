import numpy as np
arr = np.array([[10,20,30],[40,50,60],[70,80,90]])
print("Array\n",arr)

print("Sum (columnwise):",np.sum(arr,axis=0))
print("Sum (rowwise):",np.sum(arr,axis=1))
print("Cumulative Sum (columnwise):\n",np.cumsum(arr,axis=0))
print("Cumulative Sum (rowwise):\n",np.cumsum(arr,axis=1))
print("Max (columnwise):",np.max(arr,axis=0))
print("Max (rowwise):",np.max(arr,axis=1))
print("Min (columnwise):",np.min(arr,axis=0))
print("Min (rowwise):",np.min(arr,axis=1))

# Array
#  [[10 20 30]
#  [40 50 60]
#  [70 80 90]]
# Sum (columnwise): [120 150 180]
# Sum (rowwise): [ 60 150 240]
# Cumulative Sum (columnwise):
#  [[ 10  20  30]
#  [ 50  70  90]
#  [120 150 180]]
# Cumulative Sum (rowwise):
#  [[ 10  30  60]
#  [ 40  90 150]
#  [ 70 150 240]]
# Max (columnwise): [70 80 90]
# Max (rowwise): [30 60 90]
# Min (columnwise): [10 20 30]
# Min (rowwise): [10 40 70]
