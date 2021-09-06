import random

list = []
n = 10

for i in range(n):
    list.append(random.randint(1, 21))
print(list)

for i in range(len(list)):
    minindex = i
    min = list[i]
    for j in range(i, len(list)):
        if(min > list[j]):
            min = list[j]
            minindex = j
    temp = list[i]
    list[i] = list[minindex]
    list[minindex] = temp

print(list)
