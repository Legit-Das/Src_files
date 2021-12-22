str1 = input("Enter the first word: ")
str2 = input("Enter the second word: ")
#Convert both the strings into lowercase
strl1 = str1.lower()
strl2 = str2.lower()

#check if length is the same
if(len(strl1) == len(strl2)):
    #sort the strlings
    sorted_strl1 = sorted(strl1)
    sorted_strl2 = sorted(strl2)
    #if sorted char arrays are the same
    if(sorted_strl1 == sorted_strl2):
        print(str1,"and",str2,"are anagrams.")
    else:
        print(str1,"and",str2,"are not anagrams.")
else:
    print(str1,"and",str2,"are not anagrams.")
