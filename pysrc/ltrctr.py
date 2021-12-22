text = input("Input your text: ")
wordct = 1
for i in range(len(text)):
    if(text[i] == ' ' or text[i] == '\n'):
        wordct = wordct + 1

print("Total number of words = ",wordct)

ltrct = {}
for char in text:
    if char in ltrct:
        ltrct[char] += 1
    else:
        ltrct[char] = 1

print("Letter count: ",ltrct)
