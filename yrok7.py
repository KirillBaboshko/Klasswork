'''
pitstsa=[]
n=int(input("Введите число pitstsa\n"))
sum=0
for i in range (n):
    l=int(input(f"Введите оценку pitstsa №-{i+1}\n"))
    pitstsa.append(l)
    sum+=l
print(sum/l)
'''
'''
list=[6,8,2,4]
for i in range(len(list)):
    print(f"{i}-{list[i]}",sep=' ')
print()
for i in list:
    print(f"{i}", sep=' ')
'''
'''
list=[6,8,2,4]
list.append(10)
list.insert(0,5)
list.insert(3,5)
for i in list:
    print(f"{i}", end=' ')
'''
'''
list=[6,8,5,2,4]
list.remove(5)
for i in list:
    print(f"{i}", end=' ')
'''
'''
list=[6,8,5,2,4,]
n=5
if (list.count(n)!=0):#-проверка
    list.remove(n)
for i in list:
    print(f"{i}", end=' ')
'''
'''
list=[6,8,5,2,4,]
var=list.pop(2)
for i in list:
    print(f"{i}", end=' ')
print("\n",var)
'''
'''
list=[1,2,3,4,5]
print(list)
t=list[0]
list[0]=list[4]
list[4]=t

t=list[1]
list[1]=list[3]
list[3]=t
print(list)
'''
'''
import random
list=[]
n=10
for i in range(n):
    list.append(random.randint(1,21))
print(list)
for i in range(len(list)//2):
    temp=list[i]
    list[i]=list[len(list)-1-i]
    list[len(list)-1-i]=temp
print(list)
'''
'''
list=[1,2,3,4,5]
list1=[1,"Hi",False,3.5,list]
print(list1)
'''
'''
month=["","Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сеньтябрь","Октябрь","Норябрь","Декабрь"]
m=int(input("Введите номер месяца\n"))
print(month[m])
'''
'''
import random
list=[]
n=10
for i in range(n):
    list.append(random.randint(1,21))
print(list)
for i in range(len(list)):
    minindex=i
    min=list[i]
    for j in range(i,len(list)):
        if(min>list[j]):
            min=list[j]
            minindex=j
    temp=list[minindex]
    list[minindex]=list[i]
    list[i]=temp
print(list)
'''
