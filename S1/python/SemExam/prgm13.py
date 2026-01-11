# Print the pattern

rows = 5
for i in range(rows):
    for j in range(rows):
        print('*',end=" ")
    print()

# * * * * * 
# * * * * * 
# * * * * *
# * * * * *
# * * * * *
print("\n")

for i in range(rows):
    for j in range(i+1):
        print('*',end=" ")
    print()

# *
# * *
# * * *
# * * * *
# * * * * *
print("\n")

for i in range(rows):
    for j in range(i,rows):
        print('*',end=" ")
    print()

# * * * * *
# * * * *
# * * *
# * *
# *
print("\n")

for i in range(rows):
    for j in range(i,rows):
        print(' ',end=" ")
    for k in range(i+1):
        print('*',end=" ")
    print()

#           *
#         * *
#       * * *
#     * * * *
#   * * * * *
print("\n")

for i in range(rows):
    for j in range(i,rows):
        print(' ',end=" ")
    for k in range(i):
        print('*',end=" ")
    for l in range(i+1):
        print('*',end=" ") 
    print() 

#           *
#         * * *
#       * * * * *
#     * * * * * * *
#   * * * * * * * * *
print("\n")

for i in range(rows):
    for j in range(i+1):
        print(' ',end=" ")
    for k in range(i,rows-1):
        print('*',end=" ")
    for l in range(i,rows):
        print('*',end=" ") 
    print()

#   * * * * * * * * *
#     * * * * * * *
#       * * * * *
#         * * *
#           *
print("\n")

for i in range(rows-1):
    for j in range(i,rows):
        print(' ',end=" ")
    for k in range(i):
        print('*',end=" ")
    for l in range(i+1):
        print('*',end=" ") 
    print() 

for i in range(rows):
    for j in range(i+1):
        print(' ',end=" ")
    for k in range(i,rows-1):
        print('*',end=" ")
    for l in range(i,rows):
        print('*',end=" ") 
    print()

#           *
#         * * *
#       * * * * *
#     * * * * * * *
#   * * * * * * * * *
#     * * * * * * *
#       * * * * *
#         * * *
#           *

