# Create a class Engine (_power) and Wheels (_size). 
# Derive the class Car (_model) from Engine and Wheels. 
# Display details of the car using method overriding.

class Engine:
    def __init__(self,power):
        self._power = power
    def display(self):
        print(f"Engine Power = {self._power}")
    
class Wheels:
    def __init__(self,size):
        self._size = size
    def display(self):
        print(f"Wheel Size = {self._size}")

class Car(Engine,Wheels):
    def __init__(self,power,size,model):
        Engine.__init__(power)
        Wheels.__init__(size)
        self._model = model
    def display(self):
        