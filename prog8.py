'''
for i in 7, 2, 9, 4, 25, 6:
    print(i)

for i in 0, 1, 2, 3, 4, 5:
    print(i)
'''

n = int(input("input height: "))
m = int(input("input width: "))

for i in range(n):
    for j in range(m):
        print("*", end="")
    print()

print()

for i in range(n):
    print("*"*m)




sum = 0
for i in range(100):
    if i % 2 == 0:
        sum += i

for i in range(0, 100, 2):
    sum += i
