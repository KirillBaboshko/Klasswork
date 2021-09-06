str = input("введите строку ")

strnew = ""

for i in range(len(str)):
    if str[i] != " ":
        strnew += str[i]
        # strnew = strnew + str[i]
strnew = str.replace(" ", "")

ispalindrom = True

len = len(strnew)

for i in range(len // 2):
    if strnew[i].upper() != strnew[len - 1 - i].upper():
        ispalindrom = False
        break

if ispalindrom:
    print("Да это палиндром")
else:
    print("Нет это не палиндром")
