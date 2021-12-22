a=int(input("First side of triangle:"))
b=int(input("Second side of triangle:"))
c=int(input("Thirs side of triangle:"))
s=(a+b+c)/2
a=(s*(s-a)*(s-b)*(s-c))**0.5
print("The aeea of triangle:"+str(a))