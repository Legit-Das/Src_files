"""text = input("Input your text: ")
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
"""
a = input("Enter the string: ")
alpha = 0
number = 0
spec = 0
for i in range(len(a)):
    if a[i].isalpha():
        alpha += 1
    elif a[i].isdigit():
        number +=1
    else:
        spec += 1

print("Alphabets = ",alpha,'\n',"Number =",number,'\n',"Special chars =",spec)

