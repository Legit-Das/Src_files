text = input("Enter your text: ")
#.lowe() converts string into lowercase
words = [word.lower() for word in text.split()]

words.sort()
print("The sorted words are: ")
for word in words:
    print(word,end=' ')
