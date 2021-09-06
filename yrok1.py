
num = int (input("input integer number"))
print (num)
reversNum = num % 10
num = num // 10
reversNum = reversNum * 10 + num % 10
num = num // 10
reversNum = reversNum * 10 + num % 10
num = num // 10
reversNum = reversNum * 10 + num % 10

print (reversNum)

'''
num = int (input("input integer number"))
a1 = num // 100000
a2 = num // 10000 % 10
a3 = num // 1000 % 10
a4 = num // 100 % 10
a5 = num // 10 % 10
a6 = num % 10
if (a1+a2+a3) == (a4+a5+a6):
    print ("+")
else:
    print ("-")
'''
'''
year = int(input("Введите год"))
if (year % 4 == 0) and (year % 100 != 0) or (year % 400 == 0):
     print ("год високосный")
else:
    print ("Год не високосный")
'''
'''
rub = int(input("Введите рубли"))
kop = int(input("Введите копейки"))
rub += kop//100
kop %= 100
print (rub + "руб.," +kop + "коп.")
'''
'''
sec = int(input("Введите секунды"))
hours = sec // (60 * 60)
minutes = (sec - hours * 60 * 60)//60
sec %=60
print(hours,minutes,sec)
'''
'''
n=int(input("Введите нормер месяца")
if n==12 or n==1 or n==2:
    print ("зима")
elif n==3 or n==4 or n==5:
    print("весна")
elif n==6 or n==7 or n==8:
    print("лето")
elif n==9 or n==10 or n==11:
    print("осень")
'''
'''
number = int(input("Введите целое чсло"))
revers_number=0
while number>0:
    revers_number = revers_number * 10 + number % 10
    number=number //10
print (revers_number)
'''
