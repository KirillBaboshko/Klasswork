'''
year = int(input("Введите год "))
if(year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0):
    print("Год високосный")
else:
    print("Год не високосный")

rub = int(input("Введите рубли "))
kop = int(input("Введите копейки "))
rub += kop // 100
kop %= 100
print(rub + "руб., " + kop + "коп.")
'''
seconds = int(input("Введите секунды "))
hours = seconds // (60 * 60)
minutes = (seconds - hours * 60 * 60) // 60
minutes = seconds // 60 % 60
seconds %= 60
print(hours, minutes, seconds)
