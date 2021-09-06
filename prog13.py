str = "kljklj klds (34534) lkjdfs (34534534) jkhjkh sdfsdjkh (jhgjhghj (lklk))"

#input("input str ")

while "(" in str or ")" in str:
    left = str.rfind("(")
    right = str.find(")", left)
    str = str.replace(str[left:right + 1], "")

print(str)
