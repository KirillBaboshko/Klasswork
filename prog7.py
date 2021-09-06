sum = 0

while True:
    inputstr = input("Ваш ввод ")
    if inputstr == "q":
        break
    if not(inputstr.isdigit()):
        continue
    sum += int(inputstr)


print(sum)
