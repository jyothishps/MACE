# Create a class Complex with private attributes real and imaginary parts. Overload '>=' operator to find the greatest number.

class Complex:
    def __init__(self,real,img):
        self.__real = real
        self.__img = img

    def get_real(self):
        return self.__real
    
    def get_img(self):
        return self.__img
    
    def magnitude(self):
        return (self.__real ** 2 + self.__img ** 2) ** 0.5
    
    def __ge__(self,other):
        return self.magnitude() >= other.magnitude()
    
    def __str__(self):
        return f"{self.__real} + {self.__img}i"
    
c1 = Complex(3,4)
c2 = Complex(1,7)

print(f"Is {c1} >= {c2}? -> ",c1 >= c2)