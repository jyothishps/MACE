class Rectangle:
    def __init__(self, l=0, b=0):
        self.l = l
        self.b = b

    def area(self):
        return self.l * self.b
    
    def perimeter(self):
        return 2 * (self.l + self.b)
    
    def __gt__(self, other):
        return self.area() > other.area()
    
    def __str__(self):
        return f"Length = {self.l}, Breadth = {self.b}, Area = {self.area()}, Perimeter = {self.perimeter()}"
    
try:
    print("Enter rectangle 1 details:")
    l1 = int(input("Enter length:"))
    b1 = int(input("Enter breadth:"))
    r1 = Rectangle(l1,b1)

    print("Enter rectangle 2 details:")
    l2 = int(input("Enter length:"))
    b2 = int(input("Enter breadth:"))
    r2 = Rectangle(l2,b2)

    print("\nRectangle 1\n",r1)
    print("\nRectangle 2\n",r2)

    if r1 > r2:
        print("Rectangle 1 has larger area")
    elif r2 > r1:
        print("Rectangle 2 has larger area")
    else:
        print("Both have same area")

except Exception as e:
    print("Error:",e)