'''
n=int(input("Введите число"))
x=0
while n>0:
    x=x*10+n%2
    n=n//2
print (x)
'''
'''
n=int(input())
for i in range (n):
    for j in range (n):
        if i==j or i==n-j-1 or j==n//2 or i==n//2:
            print("*",end="")
        else:
            print(" ",end="")
    print()
'''
'''
n=5
i=0
while i<n:
    print(i)
    i+=1
else:
    print("else",i)
'''
'''
&-умножение-(И);|-сложение-(или); ~-отрицание(не); ^-когда оба значения разные
'''
'''
a=53
b=45
print (a&b)
print (a|b)
print (~a,~b)
print (a^b)
'''
'''
w=0
mask1=1
mask2=2
mack4=4
mask8=8
mask16=16
mask32=32
w=w|mask2
w=w|mask8
print(w)
if w&mask1:
    print("вы подобрали нож")
else:
    print("ножа нет")
if w&mask2:
    print("вы подобрали ствол")
else:
    print("ствола нет")
'''
'''
w=0
mask1=1
mask2=2
mack4=4
mask8=8
mask16=16
w=29
w=w^mask8
print(w)
'''
'''
print(13>>2)-сдвиги
'''
