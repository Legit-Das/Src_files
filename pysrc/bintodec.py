#Binary to decimal conversion program
num = int(input("Enter a binary number: "))
deci = 0
e = 0
while num > 0:
    rem = num % 10
    deci = deci + (rem * (2**e))
    num  = num // 10
    e = e+1
print(deci)
