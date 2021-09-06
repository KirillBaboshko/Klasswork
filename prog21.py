import random

mainSize = 10
mainList = []

def ListPrint(list):
    for i in list:
        print(i, end=" ")
    print()

for i in range(mainSize):
    mainList.append(random.randint(1, mainSize))

ListPrint(mainList)

duplicateList = []
originalList = []

for i in mainList:
    if mainList.count(i) == 1:
        originalList.append(i)
    elif duplicateList.count(i) == 0:
        duplicateList.append(i)

print(originalList)
print(duplicateList)
