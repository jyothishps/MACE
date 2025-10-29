dic = {1:1,2:4,3:9,4:16}
print(dic)
k = int(input("Enter key:"))
print("Key already exists:",k in dic.keys())
print("Ascending order:",dict(sorted(dic.items())))
print("Descending order:",dict(sorted(dic.items(),reverse=True)))

print("\n")


dic1 = {1:1,2:4,3:9,4:16}
dic2 = {1:1,2:4,5:25,6:36}
print(dic1,"\n",dic2)
dic1.update(dic2)
print("New:",dic1)