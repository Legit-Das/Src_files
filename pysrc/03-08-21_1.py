m = int(input("Enter the lower bound: "))
n = int(input("Enter the upper bound: "))
print("Prime Numbers: ")
for i in range(m,n+1):
    if i > 1:
        for j in range(2,i):
            if i % j == 0:
                break
        else:
            print(i,"is prime")
