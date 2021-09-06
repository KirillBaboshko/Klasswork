import random

print("*"*30,"\n")
print(" "*5,"ИГРА УГАДАЙ ЧИСЛО\n")
print("*"*30)

allpart = 0

while True:
    print("*"*30)
    print(f"Партия №{allpart}")
    print("1 - играем\n0 - выходим!")
    answer = input("Ваш выбор")
    while not(answer == "0" or answer == "1"):
        print("1 - играем\n0 - выходим!")
        answer = input("Ваш выбор")

    if answer == "0":
        break

    randnumber = random.randint(1, 1000)
    trynumber = 0
    isquit = False
    while True:
        print(30*"*")
        print(f"Попытка №{trynumber + 1}")
        mynumber = input("Введите число от 1 до 1000 или 0 - для выхода")
        if mynumber == "0":
            isquit = True
            break
        while not(mynumber.isdigit() and (int(mynumber) > 0 and int(mynumber) <= 1000)):
            mynumber = input("Введите число от 1 до 1000")
        trynumber += 1
        mynumber = int(mynumber)
        if mynumber == randnumber:
            print(f"Вы угадали число {randnumber} за {trynumber} попыток")
            print("*"*30)
            break
        elif mynumber > randnumber:
            print("Ваше число больше загаданного")
        else:
            print("Ваше число меньше загаданного")
    if isquit:
        break

print("До свидания! Игра закончена!")
