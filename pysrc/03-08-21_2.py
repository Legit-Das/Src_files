"""
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
"""
k = 1
for i in range(1,6):
    for j in range(1,i+1):
        print(k,end=' ')
        k+=1
    print()

"""
    1
   12
  123
 1234
12345
"""
for i in range(1,6):
    for j in range(1,6-i):
        print(" ",end='')
    for j in range(1,i+1):
        print(j,end='')
    print()

"""
54321
 4321
  321
   21
    1
"""
for i in range(5,0,-1):
    for j in range(1,6-i):
        print(' ',end='')
    for j in range(i,0,-1):
        print(j,end='')
    print()

"""
    5
   545
  54345
 5432345
543212345
"""
for i in range(5,0,-1):
    for j in range(1,i):
        print(' ',end='')
    for j in range(5,i-1,-1):
        print(j,end='')
    for j in range(i+1,6):
        print(j,end='')
    print()

"""
    1
   212
  32123
 4321234
543212345
"""
for i in range(1,6):
    for j in range(1,6-i):
        print(' ',end='')
    for j in range(i,0,-1):
        print(j,end='')
    for j in range(2,i+1):
        print(j,end='')
    print()
