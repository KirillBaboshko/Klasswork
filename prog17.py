import random

def PrintList(listarg):
    print("list:")
    for i in range(len(listarg) - 1):
        print(listarg[i], end=", ")
    print(listarg[len(listarg) - 1])

def ListReverse(listarg, index):
    templist = listarg[index:]
    templist.reverse()
    listarg = listarg[:index] + templist
    return listarg

n = 10
list = []
for i in range(n):
    list.append(random.randint(1, 100))

PrintList(list)

for i in range(len(list)):
    indexmin = i
    for j in range(i, len(list)):
        if list[indexmin] > list[j]:
            indexmin = j

    list = ListReverse(list, indexmin)
    list = ListReverse(list, i)

PrintList(list)


'''
i = 4
l = [1, 2, 3, 4, 5, 6, 7]
l2 = l[i:]
l2.reverse()
l = l[:i] + l2
'''






#list1[0] = 2
#print(list2)
