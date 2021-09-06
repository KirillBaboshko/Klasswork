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
originalList = []
duplicateList = []
duplicateList2 = []

#originalList = [i for i in mainList if mainList.count(i) == 1]
#duplicateList = [i for i in mainList if mainList.count(i) > 1 and originalList.count(i) == 0]
#duplicateList2 = list(filter(lambda i: mainList.count(i) > 1 and duplicateList2.count(i) == 0, mainList))
#print(originalList)
#print(duplicateList)
