n = int(input("input n "))
col = int(input("input col "))
sizeBox = n // col
sizeAdd = n % col

for i in range(1, sizeBox + 1):
    value = i
    add = sizeAdd
    for j in range(col):
        print(value, end=" ")
        value += sizeBox
        if add > 0:
            value += 1
            add -= 1
    print()
value = sizeBox + 1
for i in range(sizeAdd):
    print(value, end = " ")
    value += sizeBox + 1
print()
