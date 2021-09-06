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

# обход основного списка
for i in range(len(mainList)):
    # проверяем есть или нет в списке дубликатов
    isdupl = False
    for j in range(len(duplicateList)):
        if mainList[i] == duplicateList[j]:
            isdupl = True
            break
    # если есть то переходим к след. элементу главного списка
    if isdupl:
        continue

    # с списке дубликатов нет, но надо проверить а не дубликат ли?
    isdupl = False
    for j in range(i + 1, len(mainList)):
        if mainList[i] == mainList[j]:
            isdupl = True
            break

    # если дубликат то в один список
    if isdupl:
        duplicateList.append(mainList[i])
    # если нет то в другой
    else:
        originalList.append(mainList[i])


ListPrint(duplicateList)
ListPrint(originalList)
