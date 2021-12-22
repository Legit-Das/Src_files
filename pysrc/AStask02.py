def factors(intvar):
    for i in range(2, intvar//2):
        if (intvar % i) == 0:
            yield i
a = int(input('Enter an integer: '))

print('The factors of ',a,'are :')

print(1,end = ' ')
for i in factors(a):
    print(i,end = ' ')
print(a)
