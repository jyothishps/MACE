# write a program to (a) determine frequency of alphabets in a word (b) create a list of first names, count numbers of names that start with 'a' (c) each word in a line text.

word = input("Enter word:")
freq = {}

for ch in word:
    if ch.isalpha():
        freq[ch] = freq.get(ch,0)+1

for k,v in freq.items():
    print(k,":",v)

# Enter word:apple
# a : 1
# p : 2
# l : 1
# e : 1

lst = input("Enter names:").split(" ")
count = 0
for x in lst:
    if x.startswith("a"):
        count+=1
    
print("No. of names starts with 'a':",count)

# Enter names:amal cenna anandhu nisha pranav akash
# No. of names starts with 'a': 3

text = input("Enter line of text:").split(" ")
for word in text:
    print(word)

# Enter line of text:hi i am pranav
# hi
# i
# am
# pranav