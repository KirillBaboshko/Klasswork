'''
n=int(input("Введите число\n"))
c=0;
while n!=1:
    if n%2==0:
        n=n//2
    else:
        n=n*3+1
    c=c+1
    print(n)
print("Число шагов",c)
'''
'''
str="this is string"
print(str)
for i in range(len(str)):
    print(str[i])
'''
'''
str="this is string"
print(str.upper())
'''
'''
str="this is string"
print(str.upper())
print(str.lower())
print(str.title())
print(str.capitalize())
'''
'''
str1="sergey"
str2="sergey"
print (str1.upper()==str2.upper())
'''
'''
s1="777"
s2="Алпоазплз"
s3="вававау777"
print(s1.isalpha())
print(s2.isalpha())
print(s3.isalpha())
print()
print(s1.isnumeric())
print(s2.isnumeric())
print(s3.isnumeric())
'''
'''
s0=""
str="This is string"
print(str.find("is"))
print(str.rfind("is"))
'''
'''
str=input("Введите строку\n")
s=""
for i in range(len(str)):
    if str[i]!="":
            s+=str[i]
ispal=True
len=len(s)
for i in range(len//2):
    if s[i].upper()!=s[len-i-1].upper() :
        ispal=False
        break
if ispal:
    print("это палиндром")
else:
    print("это не палиндром")
'''
'''
n=65
print(n,chr(n),str(n))
'''
'''
n=65
str1="stroka{n}"
str2=f"stroka{n}"
print(str1,str2)
'''
'''
str="This is string"
print(str.find("is")!=-1)
'''
'''
str="This is string"
print("is"in str)
'''
'''
str="This is string"
print(str.count("is"))
'''
