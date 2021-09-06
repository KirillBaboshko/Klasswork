'''
students = []
countStudents = int(input("Число студенитов в группе"))
for i in range(countStudents):
    l = int(input(f"Оценка {i + 1}-го студента"))
    students.append(l)

sum = 0
for i in range(len(students)):
    sum += students[i]
print(sum / countStudents)

sum = 0
for i in students:
    sum += i
print(sum / countStudents)
'''

list = [6, 8, 2, 4]
for i in range(len(list)):
    print(f"{i} - {list[i]}", end=" ")
print()

for i in list:
    print(f"{i}", end=" ")
print()
list.append(10)
list.insert(0, 20)
list.insert(3, 30)

for i in list:
    print(f"{i}", end=" ")

print()
el = 30
if(list.count(el) != 0):
    list.remove(el)
print()
for i in list:
    print(f"{i}", end=" ")
print()

var = list.pop(2)
for i in list:
    print(f"{i}", end=" ")
print("\n",var)
