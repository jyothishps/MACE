# Compare above two students based on pass percentage.

# Class for personal details
class Person:
    def __init__(self, name, roll):
        self.name = name
        self.roll = roll

# Class for marks
class Marks:
    def __init__(self, maths, computer):
        self.maths = maths
        self.computer = computer

# Student class inherits from Person and Marks
class Student(Person, Marks):
    def __init__(self, name, roll, maths, computer):
        Person.__init__(self, name, roll)
        Marks.__init__(self, maths, computer)

    def percentage(self):
        total = self.maths + self.computer
        return total / 2

    def display(self):
        print(f"Name: {self.name}")
        print(f"Roll Number: {self.roll}")
        print(f"Maths Marks: {self.maths}")
        print(f"Computer Marks: {self.computer}")
        perc = self.percentage()
        print(f"Percentage: {perc}%")
        print("Result: Pass" if perc >= 50 else "Result: Fail")


# Predefined student data
student1 = Student("Alice", "101", 60, 40)
student2 = Student("Bob", "102", 70, 60)

# Display both students
print("Student 1 Details:")
student1.display()
print("\nStudent 2 Details:")
student2.display()

# Compare percentages
perc1 = student1.percentage()
perc2 = student2.percentage()

print("\nComparison Result:")
if perc1 > perc2:
    print(f"{student1.name} has a higher percentage ({perc1}%) than {student2.name} ({perc2}%).")
elif perc2 > perc1:
    print(f"{student2.name} has a higher percentage ({perc2}%) than {student1.name} ({perc1}%).")
else:
    print(f"Both students have the same percentage ({perc1}%).")
