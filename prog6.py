import random

allpart = 0
winpart = 0

answer = "y"

while answer == "y":
    randnumber = random.randint(1, 1000)

    print("1 - нечетное число","2 - четное число", sep = "\n")
    mynumber = input("ваш выбор ")
    while not(mynumber == "1" or mynumber == "2"):
        print("1 - нечетное число","2 - четное число", sep = "\n")
        mynumber = input("ваш выбор ")
    mynumber = int(mynumber)

    allpart += 1
    if mynumber % 2 == randnumber % 2:
        winpart += 1

    print(f"\nкомпьютер загадал {randnumber}, вы выбрали {mynumber}\n")

    answer = input("Продолжаем? y/n ")

print(f"Всего было сыграно {allpart} партий")
print(f"Вы угадали {winpart} раз")
