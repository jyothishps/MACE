import numpy as np

arr2d = np.array([[10,20,30],[40,50,60],[70,80,90]])
print("Original 2d array")
print(arr2d)

print("\nFirst two rows:")
print(arr2d[0:2,:])

print("\nFirst two cols:")
print(arr2d[:,0:2])

print("\nMiddle Element:")
print(arr2d[1,1])

print("\nSubmatrix (row 0-1 & col 1-2):")
print(arr2d[0:2,1:3])

arr3d = np.array([[[1,2,3],[4,5,6],[7,8,9]],[[10,11,12],[13,14,15],[16,17,18]]])
print("Original 3d array")

print("\n1. First block")
print(arr3d[0])

print("\n1. Second block, first row")
print(arr3d[1,0])

print("\n3. All blocks second column")
print(arr3d[:,:,1])

print("\n4. First block, elements from middle to last:")
print(arr3d[0,1:,1:])

# Original 2d array
# [[10 20 30]
#  [40 50 60]
#  [70 80 90]]

# First two rows:
# [[10 20 30]
#  [40 50 60]]

# First two cols:
# [[10 20]
#  [40 50]
#  [70 80]]

# Middle Element:
# 50

# Submatrix (row 0-1 & col 1-2):
# [[20 30]
#  [50 60]]
# Original 3d array

# 1. First block
# [[1 2 3]
#  [4 5 6]
#  [7 8 9]]

# 1. Second block, first row
# [10 11 12]

# 3. All blocks second column
# [[ 2  5  8]
#  [11 14 17]]

# 4. First block, elements from middle to last:
# [[5 6]
#  [8 9]]
