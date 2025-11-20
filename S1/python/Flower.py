# create a class Flower(name). Add the attribute petalColor at runtime. If the flower has the attribute petalColor then display '<petalColor><name>' else display 'Unknown Flower'.

class Flower:
    def __init__(self,name):
        self.name = name

    def display(self):
        if hasattr(self,'petalColor'):
            print(self.petalColor + self.name)
        else:
            print("Unknown Flower")

f1 = Flower("Rose")
f1.petalColor = "Red"
f1.display()

f2 = Flower("Lilly")
f2.display()
