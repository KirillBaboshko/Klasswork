a = int(input("input a "))
n = int(input("input n "))

p = 1
operation = 0
for i in range(n):
    operation += 1
    p *= a

print(p, operation)

res = 1
operation = 0
while n > 0:
    operation += 1
    if n % 2 == 1:
        res *= a
        n -= 1
    else:
        a *= a
        n //= 2
print(res, operation)
