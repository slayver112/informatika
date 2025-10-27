def massivB(c):
    b = []
    for i in range(len(a)):
        if int(c[i])**2 < 1000:
            b.append(c[i])
    return b
a = input().split()
print(massivB(a))
