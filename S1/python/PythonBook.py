class Publisher:
    def __init__(self,name=None):
        self.name = name
    def display(self):
        print(f"Publisher Name = {self.name}")

class Book(Publisher):
    def __init__(self,name=None,title=None,author=None):
        super().__init__(name)
        self.title = title
        self.author = author
    def display(self):
        super().display()
        print(f"Book Title = {self.title}\nBook Author = {self.author}")

class Python(Book):
    def __init__(self, name=None, title=None, author=None, price=0, no_of_pages=0):
        super().__init__(name, title, author)
        self.price = price
        self.no_of_pages = no_of_pages
    def display(self):
        super().display()
        print(f"Price = {self.price}\nNo. of Pages = {self.no_of_pages}")

try:
    publisher = input("Enter Publisher name: ")
    title = input("Enter Title: ")
    author = input("Enter Author: ")
    price = int(input("Enter Price: "))
    pages = int(input("Enter no. of pages: "))
    py = Python(publisher,title,author,price,pages)
    print("\n---BOOK DETAILS---\n")
    py.display()

except Exception as e:
    print(e)
