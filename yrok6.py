'''
s="Hello"
print(id(s))
s=s+"World"
print(id(s))
'''
'''
v=5
print(type(v))
v="Haaaay"
print(len(v))
print(v.upper())
print(type(v))
print(dir(v))
v=10.5
print(type(v))
v=True
print(type(v))
'''
'''
v="Haaaay"
for func in dir(v):
    print(func)
'''
'''
s="gol jol log jol fog jol"
s=s.replace("jol","***")
print(s)
'''
'''
s=input("input str")
s=s.strip()
print(s,"****")
'''
'''
s=input("input str")
s=s.strip("***")
print(s)
'''
'''
v=5
x=10.5
f=True
s="OOOO"
str=f"1-{v} 2-{x} 3-{f} 4-{s}"
str1="1-{} 2-{} 3-{} 4-{}".format(v,x,f,s)
print(str)
print(str1)
'''
'''
str="Hello World"
print(str[0])
print(str[-11])
print(str[len(str)-11])
'''
'''
str="Hello World Hello people"
s=str[6:11]
print(s)
'''
'''
str="Hello World Hello People"
s=str[::-1]
print(s)
s1=str[::3]
print(s1)
'''
'''
inputstr=input("input your str")
patternstr ="python"
newstr= inputstr[inputstr.lower().find(patternstr):inputstr.lower().find(patternstr)+len(patternstr)]
print (newstr)
'''
'''
inputstr=input("input your str")
patternstr ="python"
newstr= inputstr[0:inputstr.lower().find(patternstr)]+\
inputstr[inputstr.lower().find(patternstr)+len(patternstr):-1]
print (newstr)
'''
'''
str=input("input str")
while "(" in str or ")" in str:
    left=str.rfind("(")
    right=str.find(")",left)
    str=str.replace(str[left:right+1], "")
print(str)
'''
