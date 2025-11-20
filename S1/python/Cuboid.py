# Create class Rectangle (length,breadth). Derive a class cuboid (height) from Rectangle. Compare 2 Cuboid based on volume by overloading '<=' operator.

class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth

class Cuboid(Rectangle):
    def __init__(self, length, breadth, height):
        super().__init__(length, breadth)
        self.height = height

    def volume(self):
        return self.length * self.breadth * self.height

    def __le__(self, other):
        if isinstance(other, Cuboid):
            return self.volume() <= other.volume()
        return NotImplemented

    def display(self):
        print(f"Length: {self.length}, Breadth: {self.breadth}, Height: {self.height}")
        print(f"Volume: {self.volume()}")

cuboid1 = Cuboid(2, 3, 4) 
cuboid2 = Cuboid(3, 3, 3) 

print("Cuboid 1 Details:")
cuboid1.display()
print("\nCuboid 2 Details:")
cuboid2.display()

if cuboid1 <= cuboid2:
    print("\nCuboid 1 has volume less than or equal to Cuboid 2")
else:
    print("\nCuboid 1 has volume greater than Cuboid 2")
