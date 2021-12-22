def add(x,y,z):
    return x+y+z

def into(x,y,z):
    return x*y*z

def avge(x,y,z):
    return (x+y+z)/3

a,b,c = [int(x) for x in input("Enter three numbers: ").split()]

print("Sum = ",add(a,b,c))
print("Product = ",into(a,b,c))
print("Average = ",avge(a,b,c))
