print("For first co-ordinate point,")
x1=int(input("Enter the x co-ordinate: "))
y1=int(input("Enter the y co-ordinate: "))
print("For second co-ordinate point,")
x2=int(input("Enter the x co-ordinate: "))
y2=int(input("Enter the y co-ordinate: "))

dist=int((((x1-x2)**2)+((y1-y2)**2))**0.5)

print("The distance between the two points is "+str(dist)+" unit")