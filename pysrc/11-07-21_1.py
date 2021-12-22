#Fibonacci series
n = int(input("Enter the number of terms: "))
x = 0
y = 1
print(x)
print(y)
for i in range(2,n+1):
    z = x+y
    x = y 
    y = z
    print(z)


