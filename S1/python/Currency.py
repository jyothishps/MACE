class Currency:
    def __init__(self, amount, unit):
        self.amount = amount
        self. unit = unit.upper()
    def __repr__(self):
        return f"{self.amount:.2f} {self.unit}"
    
    def __eq__(self, other):
        return self.amount == other.amount and self.unit == other.unit
    
c1 = Currency(100.00, "INR")
c2 = Currency(100.00, "inr")
c3 = Currency(250.00, "INR")

print(f"Curreny A = {c1}")
print(f"Curreny B = {c2}")
print(f"Curreny C = {c3}")

print(f"A == B (100 INR vs 100 inr)? {c1 == c2}")
print(f"A == C (100 INR vs 250 INR)? {c1 == c3}")
print(f"B == C (100 inr vs 250 INR)? {c2 == c3}")