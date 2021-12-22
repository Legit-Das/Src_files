def fib(x):
    if x == 0 or x == 1:
        return 1
    else:
        return fib(x-2) + fib(x-1)

for i in range(8):
    print(fib(i),end = ' ')
