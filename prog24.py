import random
N = 4
list = []
for i in range(2*N):
    list.append(random.randint(1, 50))
print(list)

maxsum = 0
maxindex = 0
for i in range(N):
    maxsum += list[i]

print(0, list[:N], maxsum)
sum = maxsum
for i in range(1, N + 1):
    #for j in range(i, i + N):
    #    sum += list[j]
    #for item in list[i:i + N]:
    #    sum += item
    sum = sum - list[i - 1] + list[i - 1 + N]
    print(i, list[i: i + N], sum)
    if sum > maxsum:
        maxsum = sum
        maxindex = i

print(maxindex, maxsum)
