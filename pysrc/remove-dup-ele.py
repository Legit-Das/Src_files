mylist = []
"""
print("Enter 5 integers: ")
for i in range(0,5):
    num = int(input())
    mylist.append(num)
"""
mylist = [int(i) for i in input("Enter the elements: ").split()]

print(list(set(mylist)))
