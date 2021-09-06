n = int(input("введите начальное число "))
count = 0;

while n != 1:
    if n % 2 == 0:
        n //= 2 # n = n // 2
    else:
        n = n * 3 + 1
    count += 1 # count = count + 1
    print(n)

print("кол-во чисел в последовательности", count )
