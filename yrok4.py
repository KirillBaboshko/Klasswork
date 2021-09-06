'''
n=int(input("Введите номер бита"))
w=0
print(w|1<<n-1)
'''
'''
#Приоритеты
+ - ~
**
* / // %
+ -
<< >>
< > <= >=
== !==
& ^
|
= += -= *= /= %= //= &= |= ^= >>= <<=
'''
'''
n=int(input("Высота\n"))
m=int(input("Ширина\n"))
for i in range (n):
    if i==0 or i==(n-1):
        print("*"*m)
    else:
        print("*"," "*(m-2),"*",sep="")
'''
'''
n=int(input("Размер клетки\n"))
for i in range (8):
    for j in range(n):
        if (i%2==0):
            print(("*"*n+"_"*n)*4)
        else:
            print(("_"*n+"*"*n)*4)
'''
'''
n=int(input("Введите число\n"))
i=0
for i in range(n):
    space= abs((n-(2*i+1))//2)
    print(" "* space, "*"*(n-2*space),sep="")
'''
'''
number = int(input("Введите целое чсло"))

while True:
    choise =-1
    while choise <0 or choise >3:
        print("1-Количество цифр")
        print("2-сумма цифр")
        print("3- среднее арифметическое цифр")
        print("0-выход")
        choise = int(input("Ваш выбор"))
    if choise == 0:
        break
        countDigitis=0
        sumDigitis=0
        avgDigitis=0
        countzero=0
        worknumber=number
    while worknumber>0:
        countDigitis+=1
        sumDigitis+=worknumber%10
        if worknumber%10==0:
            worknumber//=10
        avgDigitis=sumDigitis/countDigitis
        if choise==1:
            print("Количество цыфр=",countDigitis)
        if choise==2:
            print("сумма=",sumDigitis)
        if choise==3:
            print("среднее арифметическое=",awgDigitis)
        if choise==1:
            print("Количество нулей=",countzero)
'''
