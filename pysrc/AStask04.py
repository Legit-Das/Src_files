def primecheck(x):
    flag = False
    for i in range(2,x):
        if x % i == 0:
            flag = True
            break
    if flag != True:
        return True
    else:
        return False

def primelist(intvar):
    for i in range(2, intvar):
        if primecheck(i):
            yield i

for num in primelist(100):
    print(num, end = ' ')
