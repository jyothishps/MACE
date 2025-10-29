def evenor237(lst):
    for i in lst:
        if i == 237:
            break
        if i % 2 ==0:
            print(i,end=" ")

lst = list(map(int,input('Enter list of numbers:').split()))
evenor237(lst)