class Time:
    def __init__(self,h=0,m=0,s=0):
        self.__h=h
        self.__m=m
        self.__s=s
    def __str__(self):
        return f"{self.__h} : {self.__m} : {self.__s}"
    
    def __add__(self,other):
        h=m=s=0
        s+=(self.__s+other.__s)%60
        m+=(self.__s+other.__s)//60
        m+=(self.__m+other.__m)%60
        h+=(self.__m+other.__m)//60
        h+=(self.__h+other.__h)%12
        return(Time(h,m,s))

print("Enter Time1")
h1=int(input("Hrs:"))
m1=int(input("Mins:"))
s1=int(input("Secs"))
t1=Time(h1,m1,s1)

print("Enter Time2")
h2=int(input("Hrs:"))
m2=int(input("Mins:"))
s2=int(input("Secs"))
t2=Time(h2,m2,s2)

t3=t1+t2

print("Time 1:",t1)
print("Time 2:",t2)
print("Sum:",t3)