'''
list1=[1,2,3,4,5,6,7,8]
list2=list1[1:5]
print(list2)
list1[0]=2
print(list2)
'''
'''
list1=[1,2,3,4,5,6,7,8]
del list1[3]
print(list1)
for i in range(len(list1)):
    print(list1[i])
'''
'''
import random
list=[]
for i in range(10):
    list.append(random.randint(0,100))
print(list)
list.sort()
print(list)
'''
'''
l=[1,2,3,4,5,6,7]
l2=l[2:]
l2.reverse()
l=l[:2]+l2
print(l)
'''
'''
n=int(input())
def PrintStars (n):
    print(n*"*")
PrintStars(n)
print("Hello World")
PrintStars(n)
'''
'''
def fact(n):
    f=1
    for i in range(1,n+1):
        f*=i
    return f
s=fact(5)
print(s)
'''
'''
def power(x,n=2):
    power=1
    for i in range(n):
        power*=x
    return power
print(power(5))
'''

import random
def PrintList(list):
    print("list:")
    for i in range (len(list)-1):
        print(list[i],end=", ")
    print(list[len(list)-1])
def ListRevers (list,index):
    templist=list[index:]
    templist.reverse()
    list=list[:index]+templist
    return list


list=[]
n=10
for i in range(n):
    list.append(random.randint(1,100))

PrintList(list)

for i in range(len(list)):
    indexmin=i
    for j in range(i,len(list)):
        if list[indexmin]>list[j]:
            indexmin=j
list=ListRevers(list,indexmin)
list=ListRevers(list,i)
PrintList(list)

'''
n=int(input("Введите число"))
col=int(input("Введите кол-во колонок"))
for i in range(1,n+1):
    list=
    print(list)
'''
'''
for i in range (1,10000000):
    print("\033[32m",i, end=" ")
'''
