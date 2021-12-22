#Prime number checking
num = int(input("Enter an integer to check prime: "))
check = 0
if num>1:
    for i in range(2,(num //2)):
        if(num % i) == 0:
            check = 1
            break

if check==1:
    print(str(num)+" is not prime")
else:
    print(str(num)+" is prime")
