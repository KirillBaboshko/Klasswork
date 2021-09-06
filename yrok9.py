'''
n=int(input("Введите цыфру\n"))
col=int(input("Введите кол-во колонок\n"))
sizeBox=n//col
sizeAdd=n%col
for i in range(1,sizeBox+1):
    print(i,end= " ")
    value=i
    add=sizeAdd
    for j in range(col-1):
        value+=sizeBox
        if add>0:
            value+=1
            add-=1
        print(value,end=' ')
    print()
value=sizeBox+1
for i in range(sizeAdd):
    print(value,end=' ')
    value+=sizeBox+1
print()
'''

import random
mainlist=[]
n=10
for i in range(n):
    mainlist.append(random.randint(1,40))
print(mainlist)
dublikate=[]
original=[]
for i in range(len(mainlist)):
    isdupl=False
    for j in range(len(dublikate)):
        if mainlist[i]==mainlist[j]:
            isdupl=True
            break
    if isdupl:
        continue
    isdupl=False
    for j in range(i+1, len(mainlist)):
        if mainlist[i]==mainlist[j]:
            isdupl=True
            break
    if isdupl:
        dublikate.append(mainlist[i])
    else:
        original.append(mainlist[i])
print(dublikate,original)

'''
import random
mainlist=[]
n=10
for i in range(n):
    mainlist.append(random.randint(1,40))
print(mainlist)
dublikate=[]
original=[]
for i in mainlist:
    if mainlist.count(i)==1:
        original.append(i)
    elif dublikate.count(i)==0:
        dublikate.append(i)
print(dublikate)
print(original)
'''
