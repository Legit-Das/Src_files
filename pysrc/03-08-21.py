m = int(input("Enter the lower bound: "))
n = int(input("Enter the upper bound: "))
print("Prime Numbers: ")
for i in range(m,n+1):
    r = i//2
    flag = 0
    for j in range(2,r+1):
        if i % j == 0:
            flag  = 1
            break
    if flag == 0:
        print(i,end=" ")
    """else:
        print(i,"is not prime")"""
