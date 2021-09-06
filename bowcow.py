import random

title = "Игра БЫКИ И КОРОВЫ"
print("*" * len(title))
print(title)
print("*" * len(title))

count = 4
number = []

while True:
    num = random.randint(0, 9)
    if number.count(num) == 0:
        number.append(num)
    if len(number) == 4:
        break

print("Число загадано")
print(number)

game = 0;
while True:
    game += 1
    print("*" * 20)
    print(f"Гейм {game}")

    while True:
        playerNumber = input("Ваше число - ")
        if len(playerNumber) == 4 and playerNumber.isdigit():
            break

    playerNumber = int(playerNumber)
    pnumber = []
    while playerNumber > 0:
        pnumber.insert(0, playerNumber % 10)
        playerNumber //= 10

    for i in range(4 - len(pnumber)):
        pnumber.insert(0, 0)

    cow = 0
    bow = 0
    for i in range(4):
        if number[i] == pnumber[i]:
            bow += 1
        for j in range(4):
            if i != j and number[i] == pnumber[j]:
                cow += 1
    print(pnumber)
    print(cow, "коров ", bow, "быков", sep=" ")
    print()
    if bow == 4:
        break

print(f"Вы угадали за {game} попыток")
