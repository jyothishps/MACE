class Person:
    def __init__(self, name, age):
        self.__name = name      # private attribute
        self.__age = age        # private attribute

    def get_name(self):
        return self.__name

    def get_age(self):
        return self.__age
    
    def __lt__(self, other):   # less than
        return self.__age < other.__age

    def __eq__(self, other):   # equal to
        return self.__age == other.__age

    def __gt__(self, other):   # greater than
        return self.__age > other.__age

p1 = Person("Tony", 30)
p2 = Person("Tom", 25)

print("Is Tony older than Tom?", p1 > p2)
print("Is Tony younger than Tom?", p1 < p2)
print("Are they the same age?", p1 == p2)
