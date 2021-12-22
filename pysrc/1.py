text = input("Input your text: ")

ltrct = {}

for char in text:
    if char in ltrct:
        ltrct[char] += 1
    else:
        ltrct[char] = 1
print(ltrc)
