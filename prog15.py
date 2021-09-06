import random

list = []
n = 10

for i in range(n):
    list.append(random.randint(1, 21))
print(list)


for i in range(len(list) // 2):
    temp = list[i]
    list[i] = list[len(list) - 1 - i]
    list[len(list) - 1 - i] = temp

print(list)
