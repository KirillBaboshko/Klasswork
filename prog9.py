
n = int(input("Введите высоту "))
m = int(input("Введите ширину "))
for i in range(n):
    if i == 0 or i == (n - 1):
        print("*" * m)
    else:
        print("*", " " * (m - 2), "*", sep = "")



ceil = int(input("Введите размер клетки "))

for i in range(8):
    for j in range(ceil):
        if(i % 2 == 0):
            print(("*" * ceil + "_" * ceil) * 4)
        else:
            print(("_" * ceil + "*" * ceil) * 4)



n = int(input("Введите размер ромба "))

for i in range(n):
    space = abs((n - (2 * i + 1)) // 2)
    print(" " * space, "*" * (n - 2 * space), sep="")

number = int(input("Введите число "))


while True:
    choise = -1
    while choise < 0 or choise > 4:
        print("1 - Количество цифр")
        print("2 - Сумма цифр")
        print("3 - Среднее арифметическое цифр")
        print("4 - Количество нулей")
        print("0 - Выход")
        choise = int(input("Ваш выбор "))
    if choise == 0:
        break

    countDigits = 0
    sumDigits = 0
    avgDigits = 0
    countZero = 0
    workNumber = number

    while workNumber > 0:
        countDigits += 1
        sumDigits += workNumber % 10
        if workNumber % 10 == 0:
            countZero += 1

        workNumber //= 10


    avgDigits = sumDigits / countDigits

    if choise == 1:
        print("Количество цифр =", countDigits)
    if choise == 2:
        print("Сумма цифр =", sumDigits)
    if choise == 3:
        print("Среднее арифметическое цифр =", avgDigits)
    if choise == 4:
        print("Количество нулей =", countZero)
