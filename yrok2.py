'''
import random
allpart=0
winpart=0
answer = "yes"
while answer == "yes":
    randnumber = random.randint(1,1000)
    print("1-нечетное\n2- четное число")
    mynumber= int(input("ваш выбор"))
    allpart+=1
    if mynumber %2 == randnumber%2:
        winpart+=1
    print(f"\nкомпьютер загадал {randnumber}, вы выбрали {mynumber}\n")
    answer=input("продолжаем? yes/no")
print(f"всего было сыграно {allpart} партий")
print(f"вы угодали {winpart} раз")
'''
'''
import random
allpart=0
winpart=0
answer = "yes"
while answer == "yes":
    randnumber = random.randint(1,1000)
    print("1-нечетное\n2- четное число")
    mynumber=input("ваш выбор")
    while not (mynumber !="1"or mynumber !="2"):
        print("1-нечетное\n2- четное число")
        mynumber= intput(mynumber)
    mynumber=int(mynumber)
    allpart+=1
    if mynumber %2 == randnumber%2:
        winpart+=1
    print(f"\nкомпьютер загадал {randnumber}, вы выбрали {mynumber}\n")
    answer=input("продолжаем? yes/no")
print(f"всего было сыграно {allpart} партий")
print(f"вы угодали {winpart} раз")
'''
'''
sum=0
inputstr=input("Ваш ввод")
while inputstr !="q":
    if inputstr.isdigit():
        sum+=int(inputstr)
    inputstr=input("Ваш ввод")
print(sum)
'''
'''
sum=0
while True:
    inputstr=input("Ваш ввод")
    if inputstr =="q":
        break
    if not(inputstr.isdigit()):
        continue
    sum += int(inputstr)
print (sum)
'''
'''
import random
print("*"*30,"\n")
print(" "*5, "игра угадай число\n")
print("*"*30)
allpart=0
while True:
    print("1-играем\n0-выходим")
    answer =input("ваш выбор")
    while not (answer == "0" or answer == "1"):
        print("1-играем\n0-выходим")
        answer = input("ваш выбор")
        if answer == "0":
            break
        randnumber=random.randint(1,1000)
        trynumber=0
        #isquit=Fals
        while True:
            print("*"*30)
            print(f"Попытка №{trynumber+1}")
            mynumber=input("Введите число от 1 до 1000 или 0 для выхода")
            if mynumber == "0":
                isquit=True
                break
            while not (mynumber.isdigit()and (int(mynumber) > 0 and int(mynumber)<=1000)):
                mynumber=input ("Введите от 1 до 1000")
                trynumber+=1
            mynumber=int(mynumber)
            if mynumber ==randnumber:
                print(f"Вы угадали число{randnumber}за {trynumber}попыток")
            elif mynumber>randnumber:
                print("Ваше чилсло больше загаданного")
            else:
                print("Ваше чилсло меньше загаданного")
        if isquit:
            break
'''



'''
for i in 1,2,3,4,5:
    print(i)
'''
'''
for i in range (10,1,-1):
    print(i, end=" ")
'''
'''
n=36
fact=1
for i in range (1,n+1):
    fact *=i
print(fact)
'''
'''
n=int(input("Введите высоту"))
m=int(input("Введите ширину"))
for i in range(n):
    for j in range(m):
        print("*", end="")
    print()
'''
'''
sum=0
for i in range(100):
    if i % 2==0:
        sum+=i
        print(i)
'''
