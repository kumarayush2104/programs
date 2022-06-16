from time import sleep

print("List as stacks")

lst = []
for i in range(1, 5):
    lst.append(i)
    print(lst)
    sleep(2)

for i in range(1, 5):
    lst.pop()
    print(lst)
    sleep(2)