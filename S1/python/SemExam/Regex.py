import re

mobile = input("Enter mobile number: ")

if re.match(r'^[6-9]\d{9}$', mobile):
    print("Valid mobile number")
else:
    print("Invalid mobile number")

email = input("Enter email: ")

if re.match(r'^[\w\.]+@[\w]+\.[a-zA-Z]{2,3}$', email):
    print("Valid email")
else:
    print("Invalid email")

text = input("Enter text: ")
numbers = re.findall(r'\d+', text)
print("Numbers found:", numbers)

text = input("Enter text: ")
words = re.findall(r'\b[aeiouAEIOU]\w*', text)
print("Words starting with vowels:", words)

password = input("Enter password: ")

if re.match(r'^(?=.*\d).{8,}$', password):
    print("Valid password")
else:
    print("Invalid password")

text = input("Enter text: ")
result = re.sub(r'\s+', ' ', text)
print(result)