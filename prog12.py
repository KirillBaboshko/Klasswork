str = "Hello World Hello People"
#print(str[0])
#print(str[-1])

s = str["."::]
print(s)
s = str[::-1]
#print(s)

inputstr = input("input your string ")
patternstr = "python"

newstr = inputstr[inputstr.lower().find(patternstr):
            inputstr.lower().find(patternstr) + len(patternstr)]

#inputstr = inputstr.lower().replace(patternstr, "")

inputstr = inputstr[0:inputstr.lower().find(patternstr)] + \
        inputstr[inputstr.lower().find(patternstr) + len(patternstr):-1]

print(inputstr);
