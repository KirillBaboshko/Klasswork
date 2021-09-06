num = int(input("input integer number"))
a1 = num // 100000
a2 = num // 10000 % 10
a3 = num // 1000 % 10
a4 = num // 100 % 10
a5 = num // 10 % 10
a6 = num % 10
if (a1 + a2 + a3) == (a4 + a5 + a6) :
    print("Lucky gay!")
else :
    print("Loozer!")
