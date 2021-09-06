'''
import random
n=10
list=[]
for i in range(2*n):
    list.append(random.randint(1,30))
print(list)
maxsum=0
maxindex=0
for i in range(n+1):
    maxsum+=list[i]
for i in range(1,n+1):
    sum=0
    for j in range(i,i+n):
        sum+=list[j]
    if sum>maxsum:
        maxsum=sum
        maxindex=i
print(maxindex,maxsum)
'''
'''
import random
n=10
list=[]
for i in range(2*n):
    list.append(random.randint(1,30))
print(list)
maxsum=0
maxindex=0
for i in range(n):
    maxsum+=list[i]
    sum=maxsum
for i in range(1,1+n):
    sum=sum-list[i-1]+list[i-1+n]
    if sum>maxsum:
        maxsum=sum
        maxindex=i
print(maxindex,maxsum)
'''
'''
print("Первый способ\n")
a=int(input("Введите число\n"))
n=int(input("Введите степень\n"))
p=1
oper=0
for i in range(n):
    oper+=1
    p*=a
print(p,oper)
print("Второй способ\n")
rez=1
oper=0
while n>0:
    oper+=1
    if n%2==1:
        rez*=a
        n-=1
    else:
        a*=a
        n//=2
print(rez,oper)
'''
