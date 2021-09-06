number = int(input("Введите целое число "))
revers_number = 0
while number > 0:
    revers_number = revers_number * 10 + number % 10
    number = number // 10
print(revers_number)
