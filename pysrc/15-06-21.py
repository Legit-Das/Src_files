start = int(input("Input start of range: "))
end = int(input("Input end of range: "))
count  = 0
for i in range(start,end+1):
    sum = 0
    flag = 0
    nc = i
    while (nc > 0) :
        sum += (nc%10)**3
        nc = nc//10
    if(sum == i):
        count = count +1
        print(sum)

print("Number of Armstrong Numbers is", str(count))
