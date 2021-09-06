def PrintStars(n = 10):
    print(n * "*")

n = 25
PrintStars(n)
print("Hello World")
PrintStars()

def fact(n):
    f = 1
    for i in range(1, n + 1):
        f *= i
    return f

def power(x, n = 2):
    power = 1
    for i in range(n):
        power *= x
    return power



print(power(2.6, 4))
print(power(8, 2))
