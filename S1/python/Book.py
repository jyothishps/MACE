# Create a class Book (title,author). Add attribute 'publisher' at runtime. 
#If the attribute 'publisher' is avalilable in Book Object, then print <title> written by <author> is published by <publisher>, else print 'Unknown Publisher'

class Book:
    def __init__(self,title,author):
        self.title = title
        self.author = author
    
    def display(self):
        if hasattr(self,'publisher'):
            print(f"{self.title} written by {self.author} is published by {self.publisher}")
        else:
            print("Unknown Book")

b1 = Book("Harry Potter","J.K.Rowling")
b1.publisher = "Bloomsbury Publishing"
b1. display()

b2 = Book("Wings of Fire","A.P.J.Abdul Kalam")
b2.display()
