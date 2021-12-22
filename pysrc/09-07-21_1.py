k = 1
for i in range(5 , 0, -1):
    for j in range(5, i-1, -1):
        print(j, end="")
    l = 9 - (k * 2) + 1
    for j in range(1, l, 1):
        print(i, end = "")
    k = k+1
    m = i
    if i == 1:
        m = 2
    for j in range(m, 5+1, 1):
        print(j, end = "")
    print()

for i in range(1, 5, 1):
    for j in range(5, i, -1):
        print(j, end = "")
    for j in range(1, 2*i, 1):
        print(i+1, end = "")
    for j in range(i+1, 5+1, 1):
        print(j, end = "")
    print()
