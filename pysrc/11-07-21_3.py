#*****
#****
#***
#**
#*
for i in range(1,6):
    for j in range(5,i-1,-1):
        print("*",end="")
    print()

"""
SAIKAT
SAIKA
SAIK
SAI
SA
S"""
#do it yourself
#Use of Function to subtraction
def fun_sub(x,y):
    return x-y

a = 25
b = 10

operation = fun_sub
print(operation(a,b))

def fun():
    for i in range(0,10):
        print("SHIBU")

fun()
def fun(i):
    print("SHIBU DASGUPTA", i)

j = 10
fun(5+2*3)

def fun(a,b):
    result = a+b
    print("Sum of", a, "and", b, "is", result)
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
fun(a,b)

#Prime number check
num = int(input("Enter an integer to check prime: "))
def prime_check(num):
    c = 0
    for i in range(2,num//2):
        if (num % i)==0:
            c=1
            break
    if c>0:
        print(num, "is not prime")
    else:
        print(num, "is prime")
prime_check(num)

x = "good"
def display():
    global v1
    v1 = "morning"
    print("Inside function", x)

display()
print("outside function", v1)
x = "chayan"
print("After modification ", x)

def fun2():
    x = 13
    def fun1():
        x = 99
        print("Inner function ", x)
    fun1()
    print("Outer function ", x)
fun2()
