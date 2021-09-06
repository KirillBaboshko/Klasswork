'''
№задание №1 (доделать)
sec = int(input("Введите секунды\n"))
days=sec//(60*60)//24
hours = sec // (60 * 60)
minutes = (sec - hours * 60 * 60)//60
sec %=60
print(days,hours,minutes,sec)
'''

#задание №2
file=input("Введите имя файла\n")
rash=file.find(".")
s=file[rash::]
print(s)

'''
#задание №3.
n=int(input("Введите число"))
'''
'''
#задание №4
import random
list1=[]
list2= []
n = 10

for i in range(n):
    list1.append(random.randint(1,10))
    list2.append(random.randint(1,10))
print(list1,list2)
if list1[i]!=list2[i]:
    print()
'''
'''''
#задание №5
import random
mainlist=[]
n=10
for i in range(n):
    mainlist.append(random.randint(1,40))
print(mainlist)
dublikate=[]
original=[]
countdublikate=0
countoriginal=0
for i in range(len(mainlist)):
    isdupl=False
    for j in range(len(dublikate)):
        if mainlist[i]==mainlist[j]:
            isdupl=True
            countdublikate+=1
            break
    if isdupl:
        continue
    isdupl=False
    countoriginal+=1
    for j in range(i+1, len(mainlist)):
        if mainlist[i]==mainlist[j]:
            isdupl=True
            break
    if isdupl:
        dublikate.append(mainlist[i])
    else:
        original.append(mainlist[i])
print(countdublikate,countoriginal)
'''''
'''
#задача №6
import random
parol=[]
n=8
for i in range (n):
    parol.append(random.randint(1,10))
print(parol)
'''
